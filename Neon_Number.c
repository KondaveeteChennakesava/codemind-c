#include<stdio.h>
int main()
{
    int n,a,k,s=0;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        a=k%10;
        s=s+a;
        k=k/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}