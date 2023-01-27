/*Functions
Function is a piece of code which performs a specific task.
Structure is a group of related data members whereas function is a group of
related instructions
Fuctions are also called as modules or procedures.
Instead of writting everything in main fuction we can break the main Function
into small manageable pieces*/
#include<stdio.h>
int add(int a, int b)//function declaration -- formal parameters---prototype
{             //fuction definition
  int c;
  c=a+b;
  return c;
}
int main()
{
  int x,y,z;
  x=10;
  y=5;
  z=add(x,y);// a new activation record is created for add function and after
  //  completing the task it returns a value , delete its activation record and
  //  store the result in z of main function.------function call
  printf("Sum is %d",z);

}
