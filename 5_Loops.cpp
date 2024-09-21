#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;

    // while(i<=n) {

    //     cout<<i<<" ";
    //     i = i+1;
        
    // }



        // do...while loop from 1 to n
    // do {
    //     cout << i << " ";
    //     ++i;
    // }
    // while (i <= n);




    // for(int i = 1; i <= n; i++) {
    //     cout << i << endl;
    // }


    for(; ; ) {
        if(i<=n) {
            cout<< i << endl;
        }
        else{
            break;
        } 
        i++;
    }




   for(int a = 0 , b =1, c = 2; a>=0 && b>=1 && c>=2; a--, b--, c-- ){
       cout<<a <<" "<< b << " "<<c << endl;
   }


   int arr[] {40, 50, 60, 70, 80, 90, 100};
    for (auto element: arr)
        cout << element << " ";



// for each
    int arr1[] = {1, 2, 3, 4};
    // Printing elements of an array using foreach loop 
    for (int x: arr1)
        cout << x << ' ';



    int s;
    for (s = 0; s < 10; s++); {
        cout << s;
    }

    return 0;
}