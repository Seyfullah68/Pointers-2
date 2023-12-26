#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    printf("mesaji girin\n");
    gets(dizi);
    char *p1,*p2;
    int tut=1;
    for(p2=dizi;*p2;p2++);
    p2--;
    for(p1=dizi;p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            tut=0;
        }
    }
    if(tut)
    {
        printf("kelime palendrom");
    }
    else
    {
        printf("kelime palendrom degil");
    }
    return 0;
}
