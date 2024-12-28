#include <stdio.h>
int main()
{
  int n, max;
  printf("enter the value of n");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; i < n; j++)
    {
      if (arr[i] > arr[j])
      {
        max = arr[i];
        arr[i] = arr[j];
        arr[j] = max;
      }
    }
  }
  for (int i=0; i < n; i++)
  {
    printf("%d", arr[i]);
  }
  return 0;
}