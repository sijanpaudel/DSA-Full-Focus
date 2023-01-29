#include<stdio.h>
#include<stdlib.h>
int *fun(int n)
{
  int *p;
  p=(int*)malloc(n*sizeof(int *));
  return p;
}
int main()
{
  int *p=fun(5);//Allocated in heap memory
  printf("Enter the elements of array\n");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&p[i]);
  }
  printf("\nThe elements in array are:\n");
  for(int i=0;i<5;i++)
  {
    printf("%d ",p[i]);
  }
}
//Once a function ends its activation record is deleted.
