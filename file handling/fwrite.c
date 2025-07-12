#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
    FILE *fp = fopen("ffile.txt","w");

    char message[100] = "this is kalpavriksha sessions on file handling to write from program";
    
    // cursor pointing at the lastof charter
    fwrite(message,sizeof(char),strlen(message),fp);
    sleep(5);
}