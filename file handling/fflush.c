#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
    FILE *fp = fopen("ffile.txt","w");

    char message[100] = "this is kalpavriksha sessions on file handling to write from program\n";
    
    
    fwrite(message,sizeof(char),strlen(message),fp);
    // now cursor pionting at the begining.
    fflush(fp);
    fclose(fp);
}