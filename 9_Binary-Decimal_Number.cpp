#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;



    // Decemal to Binary

    while(n != 0){

        // cout << n << endl;    // vagfal

        int bit = n & 1;   // reminder  // vagses

        // cout << bit << endl;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;

    }





    // Binary to Decimal

    // while( n != 0) {

    //     int digit = n % 10;

    //     if( digit == 1) {
    //         ans = ans + pow(2, i);
    //     }

    //     n = n/10;
    //     i++;

    // }



    cout << "Answer is " << ans << endl;

    return 0;
}

