#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,n3,count=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if((n1>n2)||(n1<n2))
    {
        count=1;
    }
    else if(n1==n2)
    {
        count=0;
    }
    scanf("%d",&n3);
    if(n3!=(-1))
    {
        if((n2>n3)||(n2<n3))
        {
            count=1;
            n2=n3;
        }
    }
    while(n3!=(-1))
    {
        scanf("%d",&n3);
        if(n3==(-1))
        {
            break;
        }
        if(n3!=(-1))
        {
            if((n2>n3)||(n2<n3))
            {
                count=1;
                n2=n3;
            }
        }
    }
    printf("%d",count);
    return 0;
}
