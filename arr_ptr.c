#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++)
        scanf("%d", arr+i);
    printf("The array is \n");
    for(int i=0; i<n; i++)
        printf("%d  ", *(arr+i));   
    
}
