          //marks, average  calculation//
#include<stdio.h>
 int main()
 {
   int mark1, mark2, mark3, total;
   float avg;
   printf("Enter marks of three subjects: ");
   scanf("%d %d %d",&mark1, &mark2, &mark3);

   if(mark1>=35 && mark2>=35 && mark3>=35)
   {
     total = mark1 + mark2 + mark3;
     avg = total/3;

     printf("Total marks = %d\n",total);
     printf("Average mark = %.2f\n", avg);
     if(avg>=60)
     {
       printf("Result is first class.");
     }
     else
     {
       printf("Result is second class.");
     }
   }
   else
   {
     printf("Result is fail");
   }
   return 0;
 }