#include <stdio.h>
int main()
{
    int num1,num2,i=1,HCF;
    scanf("%d%d",&num1,&num2);
    while(i<=num1 && i<=num2)
{
    if (num1%i==0 && num2%i==0)
    {
    HCF = i;
    }
    i++;
}
printf("HCF of %d and %d is : %d",num1,num2,HCF);
    return 0;
}
