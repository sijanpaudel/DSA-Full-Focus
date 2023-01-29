/*Structure as a Parameter
Call by address
If we want to make changes in the actual structure we can use call by address
*/
#include<stdio.h>
struct Rectangle
{
  int length;
  int breadth;
};
void changelength(struct Rectangle *ptr,int l)
{
  ptr->length=l;
}
int main()
{
  struct Rectangle r={1,2};
  changelength(&r,20);
  printf("New length is %d",r.length);
}
