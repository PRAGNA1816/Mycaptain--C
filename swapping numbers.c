#include <stdio.h>


int main()
{
    int a,b,l;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("values before swapping are %d %d\n",a,b);
    l=a;
    a=b;
    printf("values after swapping are %d %d",a,l);
}
