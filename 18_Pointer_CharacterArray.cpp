#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr << endl;
    //attention her
    cout << ch << endl;
    cout << &ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;
    cout << &c << endl;
    cout << *c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    // *(arr + i) = arr[i] = i[arr]

    // https://certificate.codingninjas.com/certificate/afcf7a8f23ede8c3/BadgesRoninCertificate
    // https://certificate.codingninjas.com/certificate/dbc400aad8bef08d/BadgesSamuraiCertificate


    return 0;
}