#include <stdio.h>

int main() {
    int num,i,tnum,digit,fact=1,sno=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    tnum=num;
    while(tnum!=0)
    {
        fact=1;
        digit=tnum%10;
        tnum=tnum/10;
        for(i=2;i<=digit;i++)
        {
            fact=fact*i;
        }
        sno=sno+fact;
    }
    if(sno==num)
    {
        printf("Entered number is strong number");
    }
    else
    {
        printf("Entered number is not a strong number");
    }

    return 0;
}
