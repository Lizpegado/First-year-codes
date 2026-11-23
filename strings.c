#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[25]="Hello";
    char s2[25]="World";
    // puts(strcat(s1,s2));
    // printf("The length of the string is %lu",strlen(s1));
    // printf("\nThe length of the string is %lu",strlen(s2));
    printf("the copied string is %s",strcpy(s1,s2));
    return 0; 
} 