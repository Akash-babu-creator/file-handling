#include<stdio.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    // ptr=fopen("akash.txt","r");
    // char c,str[8];
    // c=fgetc(ptr);
    // printf("The character i read was %c\n",c);
    // fgets(str,6,ptr);
    // printf("The string we read is %s\n",str);
    // fgets(str,6,ptr);
    // printf("The string we read is %s",str);
    ptr=fopen("akash.txt","r+");
    fputc('0',ptr);
    fputs("yeh",ptr);






    fclose(ptr);
}