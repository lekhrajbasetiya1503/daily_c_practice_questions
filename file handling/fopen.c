#include<stdio.h>

int main()
{
    FILE *fp = fopen("file.txt","r");
    if (fp < 0)
    {
        perror("Error opening file");
        return 1;

    }

    char buffer[100];
    size_t size = fread(buffer,sizeof(char),sizeof(buffer)-1,fp);
    buffer[size] = '\0';

    printf("%s\n",buffer);

    fclose(fp);
    return 0;


}