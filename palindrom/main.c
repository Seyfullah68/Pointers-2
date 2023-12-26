#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    int i,tut=1;
    printf("cumlenizi giriniz\n");
    gets(dizi);
    char *p1,*p2;
    p1=dizi;
    for(p2=dizi;*p2;p2++);
    p2--;
    for(p1;tut && (p1<p2);p1++,p2--)
    {
        if (*p1 != *p2)
        {
            tut=0;
        }
    }
    if(tut)
    {
        printf("%s palendrom",dizi);
    }
    else
        printf("%s palendrom degil",dizi);
    return 0;
}
