#include<stdio.h>
int main()
{
    int num= 101;
    int *pNum = NULL;
    pNum = &num;
    
    printf("Address of num is %p\n", &num);
    printf("Address stored in pointer is %p\n", pNum);
    printf("Value stored in address is %d", *pNum);

}
