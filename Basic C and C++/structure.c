/*Structure
A collection of related data members under one name
Those data may be of similiar data types or maybe of disimilar data types
It is used for defining user defined data types
For example  a rectangle is defined by values length and breadth so we can define a structure for it
in which we group these values under one name.
for eg
 struct Rectangle
 {
    int length----->4 bytes
    int breadth---->4 bytes
 }                  8 bytes in total
 This structure will consume 8 bytes of memory for each declaration of Rectangle variable
*/
#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={10,20};
    printf("The area of given rectangle is %d",r.length*r.breadth);
    printf("\n");
    struct Rectangle rec[2]={{2,3},{4,5}};  //Array of structure
    printf("The length and breadth of second index is %d and %d",rec[1].length,rec[1].breadth);

}