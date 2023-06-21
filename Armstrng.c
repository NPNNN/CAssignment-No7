#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,x,y=0,r,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r=n%10;
        x=r*r*r;
        y=y+x;
        n=n/10;
        
        
    }
    if (temp==y)
        {
            printf("armstrng");
           
        }
        else{
             printf("armstrng not");
           
        }
    
    return 0;
}