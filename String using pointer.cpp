// Abir Seth
// PRN-24070123003
// ENTC A1 

#include <iostream>
using namespace std;

int main() {

    char str[] = "You are a Kite dancing in the storm Mr Bond";

    char *ptr = str; 

    cout << "The string is: ";

    while (*ptr != '\0')
      {                  // '\0' means end of the string
        cout << *ptr;      
        ptr++;             
    }

    cout << endl;
    return 0; 
}

The string is: You are a Kite dancing in the storm Mr Bond


=== Code Execution Successful ===
