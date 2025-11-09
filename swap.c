#include<stdio.h>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1= *p2;
    *p2 = temp;
    printf("The numbers after swapping are %d , %d \n", *p1,*p2);
}
int main()
{
    int n1,n2;
    printf("Enter the first number : \n");
    scanf("%d", &n1);
    printf("Enter the second number : \n");
    scanf("%d", &n2);
    printf("Before swapping , the numbers are %d, %d\n",n1,n2);
    
    swap(&n1,&n2);
}
