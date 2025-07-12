#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = open("file.txt",O_RDONLY);
    printf("file descripter : %d\n",fd);
}