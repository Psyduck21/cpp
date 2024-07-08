/*
Left or right rotation of a string
example :
input : "abcdef"
output : "cdefab" (left rotation)
output : "efabcd" (right rotation)
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Method 1

string leftrotate(string s, int d)
{
    string Lr = s.substr(d) + s.substr(0, d);
    return Lr;
}
string rightrotate(string s, int d)
{
    return leftrotate(s, s.length() - d);
}

// Method 2

string leftR(string &str, int d)
{
    reverse(str.begin(), str.begin() - d);
    reverse(str.begin() + d, str.end());
    reverse(str.begin(), str.end());
    return str;
}

string rightR(string &str, int d)
{
    leftR(str, str.length() - d);
    return str;
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    int nochar;
    cout<<"Enter no of characters to rotate : ";
    cin>>nochar;
    cout<<"left Rotaion : "<<leftrotate(str,nochar)<<endl;
    cout<<"Right Raotaion : "<<rightrotate(str, nochar)<<endl;
    return 0;
}