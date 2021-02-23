#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int c=0,w=0,l=0;
    fp=fopen("new.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)break;
        if(ch=='\n'||ch=='\0')l++;
        if(ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')w++;
        if(ch!=EOF)c++;
    }
    printf("%d %d %d",l+1,w,c);
    fclose(fp);
}
