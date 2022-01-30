#include <stdio.h>
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
void findFirstAndLast(int arr[], int n, int target)
{
  int firstIndex = -1; 
  int lastIndex = -1; 
  int i = 0; 
  for (i = 0; i < n; i++)
{
  if (arr[i] == target)
{
  if (firstIndex == -1)
{
  firstIndex = i;
  lastIndex= i;
}
   else
{

  lastIndex = i;
}
}
}
  if (firstIndex != -1)
{
  printf("%d ",firstIndex);
  printf("%d",lastIndex);
}
  else
{
  printf("-1 -1");
}
}
 int main()
{
 int x,i,element;
  scanf("%d",&x);
  int arr[x];
   for(i=0;i<x;i++)
{
    scanf("%d",&arr[i]);
}
  scanf("%d",&element);
  const int N = ARRAY_SIZE(arr);
  findFirstAndLast(arr,N,element);
  return 0;
}