#include <iostream>

using namespace std;

bool ZerosAndOnes(string str){
    int zero = 0, one = 0;
    for(auto ch:str){
        (ch == '0') ? ++zero : ++one;
    }
    return (zero ==1 || one ==1);
}
int main(){
    cout << "Enter String :";
    string str;
    getline(cin,str);
    ZerosAndOnes(str)?cout<<"Yes": cout<<"No"; 

    return 0;
}