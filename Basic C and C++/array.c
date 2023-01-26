/*Arrays
They are the collection of similar data elements
If we have a set of integers or set of floats then we can group them under one name  as an array*/
/*The main memory is divided in three section :
   a) Code secetion
   b) Stack 
   c) Heap
For each function a new stack frame is created
In every program there is atleast one stack frame for the function main()*/
#include<stdio.h>
int main()
{
    int A[5]={2,4,6,8,10};
    int i;
     for(i=0;i<5;i++)
     {
        printf("%d ",A[i]);
     }
}