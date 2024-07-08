#include<iostream>
#include<string>
#include <sstream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

string reverseOrderOfWords(const string &str){
    string rev = "";
    string word = "";
    for(int i = str.length()-1; i>=0; i--){
        if(str[i] == ' '){
            rev += word + " ";
            word = "";
        }else{
            word = str[i] + word;
        }
    }
    rev += word;
    return rev;
}

/*
    using stringstream to extract words from string
    Using Vector to store the words

    
*/
string reverseOrderOfWordsUsingSS(const string &str){
    stringstream ss(str);
    string word;
    vector<string> vecStr;
    while(ss >> word){                  //extracting words from string
        vecStr.push_back(word);
    }
    string revStr = "";
    for(int i = vecStr.size()-1; i>=0; i--){
        revStr += vecStr[i] + " ";
    }
    return revStr;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    string rev = reverseOrderOfWords(str);
    cout<<"Reverse order of words is : "<<rev<<endl;
    return 0;
}