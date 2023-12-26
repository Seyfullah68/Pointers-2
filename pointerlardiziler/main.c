#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5]={1,2,3,4,5};
    int *p;
    p=dizi;
    printf("%d",*(p+2));
    printf("  %d",dizi[2]);
    return 0;
}
