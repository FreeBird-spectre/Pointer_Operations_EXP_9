// Abir Seth
// PRN-24070123003
//ENTC A1

#include <iostream>
using namespace std;

int main() {
    int value = 38;
    int *ptr = &value;

    cout << "Initial address stored in ptr: " << ptr << endl;
    ptr++;
   
    cout << "Address after increment: " << ptr << endl;
    ptr++;
   
    float name = 3.8;
    float *fptr = &name;

    cout << "Initial address stored in fptr: " << fptr << endl;
    fptr++;
   
    cout << "Address after increment: " << fptr << endl;
    fptr++;
   
    bool boolean = 9.123455;
    bool *bptr = &boolean;
   
     cout << "Initial address stored in bptr: " << bptr << endl;
    bptr++;
   
    cout << "Address after increment: " << bptr << endl;
    bptr++;
   
    return 0;
}

Initial address stored in ptr: 0x7fffdeef7c24
Address after increment: 0x7fffdeef7c28
Initial address stored in fptr: 0x7fffdeef7c20
Address after increment: 0x7fffdeef7c24
Initial address stored in bptr: 0x7fffdeef7c1f
Address after increment: 0x7fffdeef7c20


=== Code Execution Successful ===

