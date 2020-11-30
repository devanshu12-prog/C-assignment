#include <stdio.h>
void main()
{
    int count=0;
    long long num;
    printf("Enter a number :");
    scanf("%lld",&num);
    for(;num>0;num/=10)
        count+=1;
    printf("%d digits",count);
}