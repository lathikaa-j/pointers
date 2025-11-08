#include<stdio.h>
int main()
{
    int m,n,sum;
    int *pN1= NULL;
    int *pN2= NULL;
    printf("Enter the first number : \n");
    scanf("%d",&m);
    printf("Enter the second number : \n");
    scanf("%d",&n);
    
    pN1= &m;
    pN2= &n;
    sum = *pN1+*pN2;
    printf("The sum of two numbers is %d \n",sum);
}
