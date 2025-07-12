#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define SIZE 100

int main()
{
    int fd = open("file.txt",O_RDONLY);
    printf("file descriptor : %d\n",fd);
    if(fd<0)
    {
        printf("error oepning file : %d\n",errno);
        return 1;
    }

    char buffer[SIZE] = {"\0"};

    int random_number = read(fd,buffer,SIZE);
    if(random_number < 0){
        printf("error reading file : %d\n",errno);
        close(fd);
        return 1;
    }

    printf("numberA of bytes read : %d\n",random_number);

    printf("from file : %s\n",buffer);
}