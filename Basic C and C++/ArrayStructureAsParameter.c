/*Array of Structure as Parameter
Compiler doesn't support pass by value for array because it is time consuming
as every element of array has to be copied. But if array is inside the structure,
it is supported, here new array is created and its elements are copied.It means
any changes made in the function will not be reflected in actual parameter*/
#include<stdio.h>
struct test
{
  int A[5];
  int n;
};
void fun(struct test t1)
{
  t1.A[0]=10;//This will not change actual parameter
}
int main()
{
  struct test t={{1,2,3,4,5},5};
  fun(t);
  printf("%d",t.A[0]);//This will print 1 not 10
}
