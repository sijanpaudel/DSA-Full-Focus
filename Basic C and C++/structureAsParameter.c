//Structure as a Parameter
//Pass by value
#include<stdio.h>
struct Rectangle
{
  int length;
  int breadth;
};
int area(struct Rectangle r1)//(struct Rectangle &r1)-->call by reference
{
  //r1.length++  -->It will not modify the actual Parameter
  return r1.length*r1.breadth;
}
int main()
{
  struct Rectangle r;
  r.length=10;
  r.breadth=20;
  printf("The area of rectangle is %d",area(r));
}
/*In area function a new variable is created which will have its own length and
breadth and the values will be copied there. It means separate object will be
created in call by value and everything will be copied in its corresponding
members.In call by reference just modify the function area from r1 as a Parameter
to &r1 in which r can also be called as r1. Here r1.length++ will modify the
actual Parameter*/
