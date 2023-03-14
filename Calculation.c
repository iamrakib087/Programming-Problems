#include<stdio.h>

int main()
        {
int a,b;

printf("Enter a number:");

scanf("%d",&a);

printf("\nEnter another number:");

scanf("%d",&b);

printf("\nNow doing the calculations:\n\nAdditonal Value of the numbers:%d \n\nSubstractional Value of the numbers:%d \n\nMultiplied Value of the numbers:%d \n\nDivinational Value of the numbers:%d \n\nReamaining of the numbers after dividing:%d",a+b,a-b,a*b,a/b,a%b);

return 0;

        }
