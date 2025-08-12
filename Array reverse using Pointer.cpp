// Abir Seth
// PRN-24070123003
// ENTC A1

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[50];
  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *ptr = arr + n - 1; 

    cout << "Array in reverse: ";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr--;               
    }

    return 0;
}

Enter number of elements: 5
Enter 5 elements: 1 5 8 4 7
Array in reverse: 7 4 8 5 1 

=== Code Execution Successful ===
