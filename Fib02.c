#include<stdio.h>
#include<conio.h>
int main()
{
    int a=-1,b=1,i,n,c=0;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}