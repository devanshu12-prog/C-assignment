# C-assignment
#include <stdio.h>
void main()
{
    int num,first;
    printf("Enter a number :");
    scanf("%d",&num);
    first=num%10;
    for(;num>9;num/=10);
    printf("First digit is %d and last digit is %d",num,first);
    }
