#include<iostream>
using namespace std;

int main() {

    int a = 3;
    cout << a << endl;

    if(true) {
        int a = 5;
        cout << a << endl;
    }


    int b = 2;
    cout << b << endl;

    // int b = 7;    // error
    cout << b << endl;


    int i = 1;
    for(; i<5; i++)   {
        cout << "Hi" << endl;
    }


    if(1) {
        int c = 6;
        if(1) {
            int c = 9;
            if(1) {
                int c =7;
                cout << c << endl;
            }
        }
    }

}