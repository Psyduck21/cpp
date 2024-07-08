#include<iostream>
#include<string>
#include <sstream>

using namespace std;

int main(){
    int index,start;
    char value;
    // initialization of string
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2; // Hello World
    string str4 = str3; // Hello World
    string str5(str4); // Hello World
    string str6(5, 'a'); // aaaaa
    string str7(str6.begin(), str6.end()); // aaaaa
/*
    // string functions
    str1.size(); //return size of string
    str1.length(); //return length of string
    str1.empty(); //return true if string is empty else false
    str1.clear(); //remove all elements of string
    str1.front(); //return first element of string
    str1.back(); //return last element of string
    str1.at(index); //return element at index of string
    str1.erase(index); //remove element at index of string
    //str1.substr(start, end); //return substring from start to end of string
    str1.find(value); //return index of value in string
    str1.find(value, start); //return index of value in string from start
    str1.rfind(value); //return index of value in string from end

*/
    stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
cout<<a<<b<<c;
    return 0;
    
}