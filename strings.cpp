#include<iostream>
#include<string>
#include <algorithm>  
using namespace std;
int main(){
    string str="aapna college";
    // cout<<str<<endl;

    // str="hello";
    // cout<<str<<endl;
    // string str1="Ananya";
    // string str2="Pathak";
    // cout<<(str1<str2)<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
return 0;
}