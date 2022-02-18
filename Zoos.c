#include<stdio.h>
int main()
{
    char str[1000];
    int i, zc=0, oc=0 ,count=0 ;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    for(i=0;i<count;i++)
    {
        if(str[i]=='z')
        {
        zc++;
        }
        else if (str[i]=='o')
        {
            oc++;
        }
    }
    if(oc== 2*zc)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}