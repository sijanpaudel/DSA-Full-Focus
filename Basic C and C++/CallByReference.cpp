//Supported only in C++
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
  int temp=x;
  x=y;
  y=temp;
}
int main()
{
  int a,b;
  a=10;
  b=20;
  swap(a,b);// The swap function is copied here.
  cout<<a<<endl<<b;
}
/*Reference doesnot take extra memory, just another name is given to existing
variable. Here swap is not considered a separate function, it has become a part
of main function & there is only one activation record. When main fuction code
is running variables a and b are called as it is and once swap starts these are
called as x & y and also temp variable is created inside same activation record
of main function. Once the swap fuction ends the temp is gone. It means'
instead of jumping into swap function the swap function is pasted in the
main function where it is called. We can use call by reference for small
function but it is not recommended for heavy function. */
