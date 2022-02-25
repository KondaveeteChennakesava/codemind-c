#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,i,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    for(n=1;n<b;n++)
    {
        a=d*a;
    }
    
    printf("%d",a%c);
}