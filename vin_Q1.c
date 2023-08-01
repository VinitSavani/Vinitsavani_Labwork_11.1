#include<stdio.h>

void main()
{
    int a,i,square;
    
    printf("Enter array size :- ");
    scanf("%d",&a);
    
    int v[a];
    
    int *p;
    
    for (i=0;i<a;i++)
    {
        printf("v[%d]",i);
        scanf("%d",&v[i]);
    }
    
    for (i=0;i<a;i++)
    {
        square = v[i] * v[i] ;
        p = & square;
        printf("%d,",*p);
    }
    
}
