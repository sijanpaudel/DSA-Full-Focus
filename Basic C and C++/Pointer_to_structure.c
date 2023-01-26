/*Pointer to structure
The size of a pointer variable is equal to the size of integer variable
*/
#include<stdio.h>
#include<stdlib.h>//Do not forget stdlib.h
struct Rectangle
{
  int length;  //2 bytes(suppose)
  int breadth; //2 bytes
};
int main()
{
  struct Rectangle r={10,5};//4(bytes)
  struct Rectangle *s=&r;
  struct Rectangle *p;//(2 bytes)
  p=(struct Rectangle*)malloc(sizeof(struct Rectangle));//Dynamic Memory Allocation
  r.length=15; //for normal variable
  (*p).length=10;//for pointer variable. Precedence of . is higher than *
  p->breadth=5;//usually we use this -> for accesing pointer variable
  s->length=2;
  printf("%d\n",p->length);
  printf("%d",s->breadth);
}
