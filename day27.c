#include<stdio.h>
void triangle(int a)
{int k;
    for(int i=1;i<=a;i++)
    {int c=i;
        for(int j=1;j<=a-i;j++)
        {
        printf(" ");
        }
        for( k=0;k<i;k++)
        {
            printf("%d",c-k);
        }
        for(int m=2;m<=i;m++)
        {
            printf("%d",m);
        }
        printf("\n");


    }

}
void main()
{
    triangle(4);
}