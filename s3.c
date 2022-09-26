#include<stdio.h>
void main()
{
    int s=1;
    int n,x;
    float p=1,f=1;
    float sum=0;
    scanf("%d",&x);
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {f=f*i;
    p=p*x;
        sum=sum+(p/f);
        printf("%f\n",sum);

        
    }
    printf("%f",sum);
}