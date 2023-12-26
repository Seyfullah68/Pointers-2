#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("kac elemanli dizi olacak\n");
    scanf("%d",&a);
    int *p;
    int dizi[a];
    p=dizi;
    int i=0;
    while(i<a)
    {
        scanf("%d",p);
        p++;
        i++;
    }
    p=dizi;
    for(int j=0;j<a;j++)
    {
        printf("%4d",*(p+j));
    }
    return 0;
}
