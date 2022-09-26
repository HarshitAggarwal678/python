#include<stdio.h>
void main()
{
    int s=1;
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1.0/i)*s;
        s=s*(-1);
    }
    printf("%f",sum);
}