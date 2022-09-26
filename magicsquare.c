#include<stdio.h>
void square(int a)
{
    int b[a][a];
    int x=0,y=a/2;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            b[i][j]=0;
        }
    }
    b[x][y]=1;
    int k=2;
    while(k!=(a*a)+1)
    {
         if(b[x-1][y+1]<1&&b[x-1][y+1]>26)
        {if(x>a-1)
        {
            x=0;
            b[x][y+1]=k;
            k=k+1;
            y=y+1;
        }
        else if(y>a-1)
        {
            y=0;
            b[x][y]=k;
            k=k+1;
            y=y+1;
        }
        

        }
        else if(b[x-1][y+1]==0)
    {
        b[x-1][y+1]=k;
        k++;
        x=x-1;
        y=y-1;

    }
        
        else
        {
           b[x][y]=k; 
           k=k+1;
           x=x-1;
           y=y+1;

        }
        

    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }



}
void main()
{
    square(3);
}