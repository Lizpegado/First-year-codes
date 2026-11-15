#include<stdio.h>
int main()
{ 
    float attendance;
    printf("Enter the attendance percentage: ");
    scanf("%f", &attendance);
   if(attendance>=90)
    {   
         printf("Excellent attendance!\n");
    }

        else if(attendance>=75)
        {
              printf("Eligibible for Examination.\n");
        }
        else if(attendance>=60)
        {
             printf("Attendance shortage.");
        }   
    else
    {
              printf("Not eligible for Examination.\n");
    }

    return 0;
}