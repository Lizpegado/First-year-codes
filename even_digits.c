#include<stdio.h>
int main()
{
    int num,dig,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    do
    { 
        dig=num%10;
        if(dig%2==0)
        {
            printf("%d is an even digit.\n",dig);
            sum += dig;
        }
        num=num/10;
    }while(num!=0);
    printf("Total even digits: %d\n",sum);
    return 0;
}