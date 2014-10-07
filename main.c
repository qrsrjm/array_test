#include <stdio.h>
#include <stdlib.h>


void a2(int a[][6])
{
    int *p = a;
    int i;
    for(i=0;i<12;i++,p+=1) {
        printf("%d ",*p);
    }

    int (*pt)[6] = a;
    for(i=0;i<12;i++,pt+=1) {
        printf("%d ",*pt);
    }
}


int main()
{
    int a[2][6] = {1,2,3,4,5,6,7,8,9};
    a2(a);

    return 0;
}
