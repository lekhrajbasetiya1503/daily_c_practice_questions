#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>

int main()
{
    int fd = open("ffile.txt",O_RDWR);
    printf("the fiel descripter : %d\n",fd);
    if(fd<0)
    {
        perror("error opening file : ");
        return 1;
    }

    off_t offset = lseek(fd,29,SEEK_SET);
    if(offset<0)
    {
        perror("error seeking the file : ");
        close(fd);
        return 1;

    }

    printf("current file offset after lseek : %ld\n",(long)(offset));

    // overwrite on the value

    const char *message = "***********\n";
    ssize_t bytes_writen = write(fd,message,strlen(message));
    if(bytes_writen < 0)
    {
        perror("error to writing the file : ");
    }

    close(fd);
    return 0;
}