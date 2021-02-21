#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[80];
    fp=fopen("story.txt","r");
    while(fgets(ch,79,fp)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);
}
