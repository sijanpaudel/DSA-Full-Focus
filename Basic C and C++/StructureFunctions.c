/*Structure and Fuctions
A good way of writing C program
*/
#include<stdio.h>
struct Rectangle
{
  int length;
  int breadth;
};
void initialize(struct Rectangle *r,int l,int b)
{
  r->length=l;
  r->breadth=b;
}
int area(struct Rectangle r)
{
  return r.length*r.breadth;
}
void changelength(struct Rectangle *r,int l)
{
  r->length=l;
}
int main()
{
  struct Rectangle r;
  initialize(&r,10,5);
  printf("The area is %d\n",area(r));
  changelength(&r,20);
  printf("The new length is %d\n",r.length);
}
//In above program all Fuctions are related to same Structure rectangle
//This is the best style of coding in C language.
