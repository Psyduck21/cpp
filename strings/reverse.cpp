#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
//user defined function to reverse the string
string reverseString(const string& str){
    string rev = "";//declaration of rev string
    for(int i = str.length()-1; i>=0; i--){
        rev += str[i];
    }
    return rev;

}
int main(){
    string str1;// decalration of varaible
    cout<<"Enter string is :"; //used for output
    getline(cin,str1); //used for input
    string str2 = reverseString(str1);
    cout<<"Reversed String using UDF is : "<<str2<<endl;
    reverse(str2.begin(), str2.end());//apply built in function to reverse the string on str2
    cout<<"Reverse String using built in function : "<<str2<<endl;
    return 0;
}