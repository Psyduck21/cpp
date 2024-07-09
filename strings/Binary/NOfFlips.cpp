#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char Flip(char ch) {
    return (ch == '0') ? '1' : '0';
}

int FreqOf0and1(string s, char ch){
    int flipCount = 0;
    for (int i = 0; i< s.length();i++){
        if(s[i] != ch)
            flipCount++;
        ch = Flip(ch);
    }
    return flipCount;
}

int FlipFreq(string s){
    return min(FreqOf0and1(s,'0'),FreqOf0and1(s,'1'));
}
int main(){
    cout<<"Enter string : ";
    string str;
    getline(cin,str);
    cout<<FlipFreq(str);
    return 0;
}