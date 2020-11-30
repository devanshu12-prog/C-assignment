#include <stdio.h>
#include <math.h>
void main()
{
    int num,result,first,last,len;
    printf("Enter a number: ");
    scanf("%d", &num);
    last=num % 10;
    len=(int)log10(num); 
    first=(int)(num / pow(10,len)); 
    result=last;
    result*=(int)pow(10,len);
    result+=num%((int)pow(10,len));
    result-=last;
    result+=first;
    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d",result);
}