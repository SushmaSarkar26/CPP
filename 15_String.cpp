#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "Sushma";
    cout << str << endl;

    // string str1;
    // // cin >> str1;
    // getline(cin, str1);
    // cout << str1 << endl;

    // reverse(str.begin(), str.end());
    // cout << str << endl;

    cout << str.substr(0,4) << endl;
    cout << str.substr(1) << endl;

    char ch1='a';
    cout<<int(ch1)<<endl;

    // char s1[20] = "Sushma";
    // char s2[20] = "Sarkar";

    // strcat(s1,s2);
    // cout<<s1<<endl;

    string s1 = "abcd";
    char ch = 'e';

    s1.push_back(ch);
    cout<<s1<<endl;

    cout << s1.size() << endl;

    // char ch2[20] = "abcd";
    // cout << strlen(ch2) <<endl;

    int num=345;
    string str1 = to_string(num);
    str1 += "1";
    cout << str1 << endl; 
    cout << str1[3] << endl; 

    return 0;

}


