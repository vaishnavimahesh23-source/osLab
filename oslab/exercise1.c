#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("current directory\n");
    system("pwd");
    printf("\nfiles\n");
    system("ls-l");
    printf("\ncreating directory\n");
    system("mkdir demo");
    printf("\nlisting files again\n");
    system("ls");
    printf("\nremoving directory\n");
    system("mkdir demo");
    return 0;
}