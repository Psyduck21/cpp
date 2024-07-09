#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void CharFrequency(string& str){
    map<char,int>CharFreq;

    for(auto ch:str)CharFreq[ch]++;

    for(auto i:CharFreq){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    cout << "Enter string :" << endl;
    string str;
    getline(cin,str);
    CharFrequency(str);
    return 0;
}