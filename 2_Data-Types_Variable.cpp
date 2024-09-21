#include<iostream>
using namespace std;

int main() {

    int a = 123;
    cout << a << endl;

    char b = 's';
    cout << b << endl;

    bool c = true;
    cout << c << endl;

    float f = 1.5;
    cout << f << endl;

    double d = 1.8;
    cout << d << endl;

    int size = sizeof(a);
    cout << "size of int is " << size << " byte" << endl;
    int size1 = sizeof(b);
    cout << "size of char is " << size1 << " byte" << endl;
    int size2 = sizeof(c);
    cout << "size of bool is " << size2 << " byte" << endl;
    int size3 = sizeof(f);
    cout << "size of  float is " << size3 << " byte" << endl;
    int size4 = sizeof(d);
    cout << "size of double is " << size4 << " byte" << endl;


    // Type Casting
    int m = 'a';
    cout << m << endl;

    // char ch = 98;
    // cout << ch << endl;

    // char ch1 = 123456;
    // cout << ch1 << endl;

    unsigned int x = -112;  // unsigned means only positive number
    cout << x << endl;
}
