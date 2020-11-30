#include <stdio.h>
void main()
{
    int num,last;
    printf("Enter a number :");
    scanf("%d",&num);
    last=num%10;
    for(;num>9;num/=10);
    printf("First digit is %d and last digit is %d",num,last);
}