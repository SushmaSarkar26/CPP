#include<iostream>
using namespace std;

int main() {

    for(int i=0; i<5; i++) {

        cout<< " HI " << endl;
        cout<< " Hey " << endl;
        continue;

        cout<< "Reply toh karde " <<endl;

    }



    for(int a=0; a<10; a++) {

        if((a == 3) || (a == 7)) {
            continue;
        }

        cout<< a << " ";
    }

    cout << endl;




    for(int a=0; a<10; a++) {

        if(a  == 6) {
            break;
        }

        cout<< a << " ";
    }


}