#include <stdio.h>
#include <math.h>
void main()
{
    int num,n,i,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    digit=(int)log10(n);
    for(;n>0;n/=10)
        num = (num * 10) + (n % 10);
    digit-=((int)log10(num));
    for(;num!=0;num/=10)
    {
        switch(num%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }
    for(;digit!=0;digit--)
        printf("Zero ");
}