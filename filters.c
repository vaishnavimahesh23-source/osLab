#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[128];

    // Run Linux filter pipeline: cat + grep + sort + uniq + wc
    fp = popen("cat logfile.txt | grep error | sort | uniq | wc -l", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(1);
    }

    // Read and print the result
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Number of unique error lines: %s", buffer);
    }

    // Close the process
    pclose(fp);
    return 0;
}

