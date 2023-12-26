#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int *p;
    p=dizi;
    for(int i=0;i<10;i++)
    {
        *(p+i)=0;
    }
    for(int i=0;i<10;i++)
    {
        printf("%3d",*(p+i));
    }
    return 0;
}
