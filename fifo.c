#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FIFO_NAME "myfifo"

int main() {
    int fd;
    pid_t pid;
    char buffer[100];

    // Create the FIFO (named pipe)
    if (mkfifo(FIFO_NAME, 0666) == -1) {
        perror("mkfifo");
        // Ignore error if FIFO already exists
    }

    // Fork a child process
    pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0) {
        // Child process → Writer
        char message[] = "Hello from child (writer)!";
        fd = open(FIFO_NAME, O_WRONLY);
        if (fd == -1) {
            perror("open for write");
            exit(1);
        }
        write(fd, message, strlen(message) + 1);
        printf("Child: Sent message -> %s\n", message);
        close(fd);
    } else {
        // Parent process → Reader
        fd = open(FIFO_NAME, O_RDONLY);
        if (fd == -1) {
            perror("open for read");
            exit(1);
        }
        read(fd, buffer, sizeof(buffer));
        printf("Parent: Received message -> %s\n", buffer);
        close(fd);
    }

    return 0;
}
