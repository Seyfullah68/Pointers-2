#include <stdio.h>
#include <stdlib.h>
void degistir(int *aa, int *bb)
{
    int x;
    x=*aa;
    *aa=*bb;
    *bb=x;
}
int main()
{
    int n=10;
    int *p;
    p=&n;
    printf("%d\n",*p);
    *p=*p**p;
    printf("%d\n",n);
    int a,b;
    a=1;
    b=2;
    degistir(&a,&b);
    printf("a:%d ve b:%d",a,b);
    return 0;
}
