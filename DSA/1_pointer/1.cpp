#include <bits/stdc++.h>
using namespace std;
int main()
{
    int var = 10;
    // Declare and initialize a pointer to an integer
    int *ptr = &var;
    // 'ptr' now holds the memory address of 'var'
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (address it holds): " << ptr << endl;
    return 0;
}
