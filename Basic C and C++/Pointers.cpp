/*Pointers
Pointer is a address variable that is meant for storing address of data variable
Pointer can directly acess the code section and stack but not heap which means heap memory is external to the program
(outside the program)
Pointer are used for accessing resources that are outside the program
1. Accessing heap memory
2. Accessing resources
3. Parameter passing*/
#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];//This will create a memory of size int*5 in heap section which can be accessed by using pointer p
    // stored i stack section
    //In c program we can create a heap memory by using malloc function. Note that new is a operator in C++.
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<5;i++)
    {
      cin>>p[i];     //Works same as string
    }
    cout<<"\nThe entered elements are "<<endl;
    for(int i=0;i<5;i++)
    {
      cout<<p[i]<<endl;
    }
    delete p;//Until it is not deleted the memory allocated in heap memory will not delete

}
