#include<stdio.h>
int main()
{
    int n,i,b=0,d=1,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",b);
        c=b+d;
        b=d;
        d=c;
    }
}
