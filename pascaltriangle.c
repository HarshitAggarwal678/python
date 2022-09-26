#include<stdio.h>
void pascal()
{
    int a[5][6];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        a[i][j]=0;
    }
    a[0][1]=1;
    for(int i=1;i<=5;i++)
    {
        for( int j=1;j<=6;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int k=0;k<5-i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<6;j++)
        {if(a[i][j]!=0)
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void main()
{
pascal();
}