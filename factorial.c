#include<stdio.h>
int factorial(int *p1)
{
    int fact=1;
    for(int i=1; i<=*p1;i++ )
        fact= fact*i;
    return fact;
}
int main()
{
    int n1;
    printf("Enter the number : \n");
    scanf("%d", &n1);
    int res = factorial(&n1);
    printf("The factorial of %d is %d",n1,res);
}
