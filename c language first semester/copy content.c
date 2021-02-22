#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("story.txt","r");
    f2=fopen("copy.txt","w");
    while(1)
    {
        ch=fgetc(f1);
        if(ch==EOF)break;
        else
        fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
}
