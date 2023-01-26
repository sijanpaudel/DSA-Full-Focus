/*Reference in c++
Reference is another name given to a variable(alias)*/
#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int &r=a;//r can be used as secondary name to a
  cout<<a<<endl;
  r++;//a++
  cout<<r<<endl;
  cout<<a;

}
