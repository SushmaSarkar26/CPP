#include <iostream>
using namespace std;

// macro definition
#define LIMIT 5
#define Area(l, b)(l * b)

int main() {
    for (int i = 0; i < LIMIT; i++) {
        cout << i << " ";
    }


    int l = 10, b = 5, a;
    a = Area(l, b);
    cout << "The Area of the rectangle is: " << a;


    
    return 0;
}