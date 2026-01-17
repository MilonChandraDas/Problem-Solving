#include <bits/stdc++.h>
using namespace std;
int main()
{
    int var = 25;
    int *ptr = &var;
    // Use the dereference operator to get the value
    int value_at_ptr = *ptr;
    cout << "Value of var: " << var << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value at the address stored in ptr: " << *ptr << endl;
    // You can also use the dereference operator to change the value
    *ptr = 50;
    cout << "New value of var: " << var << endl;
    return 0;
}
