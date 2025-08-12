#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[7];

    cout << "Address stored in ptr1:" << ptr1<<endl;
    cout << "Address stored in ptr2:" << ptr2<<endl;

    int diff = ptr2 - ptr1; 

    cout << "Difference between ptr2 and ptr1:" << diff << endl;

    return 0;
}


Address stored in ptr1:0x7ffc90fc1898
Address stored in ptr2:0x7ffc90fc18ac
Difference between ptr2 and ptr1:5


=== Code Execution Successful ===
