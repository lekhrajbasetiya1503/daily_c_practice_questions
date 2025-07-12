#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define SIZE 100

int main()
{
    int fd = open("file2.txt",O_WRONLY);
    printf("file descriptor : %d\n",fd);
    if(fd<0)
    {
        printf("error oepning file : %d\n",errno);
        return 1;
    }

    char buffer[SIZE] = "this is kalpavriksha sessions on file handling to write from program 2";

    int size = write(STDIN_FILENO,buffer,strlen(buffer));
    if(size < 0){
        printf("error reading file : %d\n",errno);
        close(fd);
        return 1;
    }

    printf("number of bytes written : %d\n",size);

    sleep(5);
}