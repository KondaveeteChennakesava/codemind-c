#include<stdio.h>
int main()
{
    int c=0,l,r,k,i;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}