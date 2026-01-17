#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val = 10;


    // Declare a pointer 'ptr' and store the memory address of 'val'.
    int *ptr = &val;


    // Print the address stored in 'ptr', which is the same as the address of 'val'.
    // Then, dereference 'ptr' to print the value it points to (10).
    cout << "ptr holds address: " << ptr << ", Address of val is: " << &val << ", Value *ptr points to: " << *ptr << endl;


    // Declare a pointer-to-a-pointer 'ptr2' and store the memory address of 'ptr'.
    int **ptr2 = &ptr;


  // Print the address stored in 'ptr2', which is the same as the address of 'ptr'.
    // Then, dereference 'ptr2' once (*ptr2) to get the value it points to (the address of 'val').
    cout << "ptr2 holds address: " << ptr2 << ", Address of ptr is: " << &ptr << ", Value *ptr2 points to: " << *ptr2 << endl;


    // Use double dereferencing to access and modify the original variable 'val'.
    // *ptr2 resolves to 'ptr'. **ptr2 resolves to 'val'.
    **ptr2 = 50;


    // Print the new value of 'val' to confirm it was changed via the double pointer.
    cout << "New value of val: " << val << endl;
    return 0;
}
