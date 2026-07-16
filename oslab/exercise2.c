#include<stdio.h>
#include<fentl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
int main()
{
    int fd;
    char bufffer[100];
    struct stat fileinfo;
    DIR*dir;
    struct dirent*entry;
    printf("\n---creating and writing file---\n");
    fd=open("student.txt",O_CREAT|O_WRONGLY,0644);
    if(fd<0)
    {
        printf("file creation failed\n");
        return 1;
    }
    char data[]="linux system calls experiment\n""B.Sc cyber security laboratory";
    write(fd,data,srlen(data));
    close(fd);
    printf("data written successfully\n");
    printf("\n--reading file content---\n");
    fd=open("student.txt,O_RDONLY");
    if(fd<0)
    {
        printf("file opening ffailed\n");
        return l;
    }
    int bytes=read(fd,buffer,sizeof(buffer)-l);
    buffer[bytes]="\0";
    printf("%s\n",buffer);
    close(fd);
    printf("\n---file information---\n");
    if(stat("student.txt",&fileinfo)==0){
        printf("file sizze:ld bytes\n",fileinfo.st_size);
        printf("number of links:%ld\n",fileinfo.st_nlink);
        printf("permissions:%o\n")
    }
