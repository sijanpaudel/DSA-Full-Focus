//Parameter passing by address
#include<stdio.h>
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int a,b;
  a=10;
  b=20;
  swap(&a,&b);
  printf("%d %d",a,b);
}
/*Swap function can access the variable of main function indirectly using
pointers. Call by address is suitable for modifying the actual Parameter*/
