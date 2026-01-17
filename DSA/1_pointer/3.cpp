#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // A pointer to the first element of the array
    cout << "First element: " << *ptr << endl;
    // Move the pointer to the next integer address
    ptr++;
    cout << "Second element: " << *ptr << endl;
    // Move it back
    ptr--;
    cout << "First element again: " << *ptr << endl;
    // Point to the third element
    ptr = ptr + 2;
    cout << "Third element: " << *ptr << endl;
    return 0;
}
