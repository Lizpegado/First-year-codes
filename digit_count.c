#include<stdio.h>
int main()
{
    int num,dig,c=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    while(num!=0)
    { 
        dig=num%10;
        num=num/10;
        c++;
    }
    printf("Number of digits: %d\n",c);
    return 0;
}
