#include <stdio.h>
void main()
{
    long long num;
    int freq[10],i;
    printf("Enter a number :");
    scanf("%lld",&num);
    for(i=0;i<10;i++)
        freq[i]=0;
    for(;num>0;num/=10)
        freq[num%10]++;
    for(i=0;i<10;i++)
        printf("Frequency of %d =\t%d\n",i,freq[i]);
}