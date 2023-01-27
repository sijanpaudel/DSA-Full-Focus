//Pass by value
#include<stdio.h>
void swap(int x,int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
}
int main()
{
  int a,b;
  a=10;
  b=20;
  swap(a,b);
  printf("%d %d",a,b);
}
/*Here formal parameter are modified but actual parameter remains the same.
So swapping is done inside the variable of swap function only they are not
reflected inside the actual parameter. In pass by value any changes done
in formal parameter will not reflect in actual parameter. We use pass by value
when we donot have to modify actual parameter or when function is returning some
results. So swap function should not be written by using pass by value.*/
