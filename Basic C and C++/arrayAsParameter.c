/*Array as Parameter
Array can be passed only by address.Any changes made in the formal parameter will
be reflected in the actual parameter. It means function can modify the actual
parameter.
*/
#include<stdio.h>
void func(int A[],int n)//Here address of array is given to A[](we can use *A)
{                       //, it is pass by address and n is pass by value.

  for(int i=0;i<n;i++)
  {
    printf("%d ",A[i]);
  }
}
void funct(int A[],int n)
{
  printf("\nEnter the new values:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&A[i]);//Any changes made here will also be reflected in main function
  }
}
int main()
{
  int X[5]={1,2,3,4,5};
  printf("The value before are:\n");
  func(X,5);
  funct(X,5);
  printf("The value after are:\n");
  func(X,5);

}
/*The difference in using *A and A[] is *A can point on any integer and also
an array but A[] can point only to array.*/
