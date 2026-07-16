#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[128];
fp = popen("cat logfile.txt | grep error | sort | uniq | wc -l", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(1);
    }
     while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Number of unique error lines: %s", buffer);
    }
      pclose(fp);
    return 0;
}
