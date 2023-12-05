// Sum of first and last digit of a number
#include <stdio.h>

int main() {
   int num,tnum,fd,ld,sum;
   printf("Enter the number: ");
   scanf("%d",&num);
   
   tnum=num;
   ld=tnum%10;
   
   while(tnum)
   {
       fd=tnum%10;
       tnum=tnum/10;
   }
   
   sum=fd+ld;
   printf("Sum of first and last digit is %d", sum);


    return 0;
}
