#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("%d",j);
       }
       for(j=i;j>1;j--)
       {
           printf("%d",j-1);
       }
       printf("\n");
    }
}

