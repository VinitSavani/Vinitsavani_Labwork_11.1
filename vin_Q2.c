#include<stdio.h>

void main()
{
    int a,b;
    
    printf("Enter the value of x :- ");
    scanf("%d",&a);
    
    printf("Enter the value of y :- ");
    scanf("%d",&b);
    
    printf("Before swapping:\n");
    printf("x : %d\n",a);
    printf("y : %d\n",b);
    
    printf("After swapping:\n");
    
    int *p;
    int *q;
    
    p = & b;
    q = & a;
    
    printf("x : %d\n",*p);
    printf("y : %d\n",*q);
    
}
