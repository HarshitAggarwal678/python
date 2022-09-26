#include<stdio.h>
void main()
{
    int s=1;
    int n,f=1;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {f=f*i;
        sum=sum+(1.0/f)*s;
        s=s*(-1);
    }
    printf("%f",sum);
}