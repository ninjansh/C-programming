#include <stdio.h>
int main()
{
    int n,l,f,m,sum,t1;
    printf("Enter 3-Digit Number: ");
    scanf("%d",&n);
    f=n/100;
    t1=n%100;
    l=t1%10;
    m=t1/10;
    printf("\nFirst Digit  = %d \nMiddle Digit = %d \nLast Digit   = %d\n",f,m,l);
    sum=l+m+f;
    printf("\nSum of All 3-Digits : %d",sum);
    return 0;
}
