/*Class and Constructor
A good way of writing c++ program
In C++ functions and data members have become a part of class, we donot write
them separately like in c(structure and functions) */
#include<iostream>
using namespace std;
class Rectangle
{
private:
  int length;
  int breadth;
public:
  Rectangle(int l,int b)
  {
    length=l;
    breadth=b;
  }
  int area()
  {
    return length*breadth;
  }
  void changelength(int l)
  {
    length=l;
  }
};
int main()
{
  Rectangle r(10,20);//We call this as object instead of variable
  printf("The area of Rectangle is %d\n",r.area());
  r.changelength(30);//changelength itself have become a part of rectangle
  printf("\nThe area of Rectangle is %d\n",r.area());

}
