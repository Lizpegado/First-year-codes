#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number of digits in %d is 1",n);
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        printf("The number of digits in the given integer is %d",c);
    }
}