#include <stdio.h>
void main()
{
    int i,num,n;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Enter number of terms of product :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d X %d = %d\n",num,i,num*i);
}