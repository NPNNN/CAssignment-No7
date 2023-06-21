#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,x,i;
    printf("enter two number:");
    scanf("%d%d",&n1,&n2);
    for ( x = n1+1; x<n2-1 ; x++)
    {
        for ( i = 2; i < x; i++)
        {
           if (x%i==0)
           {
            break;

           }    
           
        }
        if (i==x)
           {
            printf("\n%d",x);
           }
        
    }
    
}