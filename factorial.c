
#include<stdio.h>
int factorial(int n, int *p1)
{
    *p1 =1;
    for(int i=1; i<=n;i++ )
        *p1= *p1*i;
    return *p1;
}
int main()
{
    int n1,fact;
    printf("Enter the number : \n");
    scanf("%d", &n1);
    int res = factorial(n1, &fact);
    printf("The factorial of %d is %d \n", n1,res);
}
