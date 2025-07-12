#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
    int fd = open("file.txt",O_RDONLY);
    printf("file discripter : %d\n",fd);
    if(fd<0)
    {
        printf("Error opening file : %d\n",errno);
    }

    if (fd <0)
    {
        perror("error opening file ");
        return 1;
    }
}