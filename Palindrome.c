#include<stdio.h>
int main()
{
    int i,res=0,q,rem;
    scanf("%d",&i);
        q=i;
        while(q!=0)
        {
            rem=q%10;
            res=(res*10)+rem;
            q=q/10;
        }
        if(res==i)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}