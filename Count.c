#include<stdio.h>
int main()
{
    int arr[20],i,n,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            e++;
        else
            o++;
    }
    printf("%d %d",e,o);
    
}