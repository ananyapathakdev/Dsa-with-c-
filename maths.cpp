#include<iostream>
using namespace std;
// void printDigit(int n){
//     int sum=0;
//     while(n!=0){
//         int digit=n%10;
//         sum+=digit;
//         n=n/10;
//     }
//     cout<<sum<<endl;
// }

bool isArmstrong(int n){
    int copyN=n;
    int sumOfcubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfcubes+=(dig*dig*dig);
        n =n/10;
    }
    return sumOfcubes==copyN;
}

int gcd (int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }else{
            b=b%a;
        }
    }
        if(a==0)return b;
        return a;
}


int main(){
    // int n=111;
    //  if(isArmstrong(n)){
    //  cout<<"Is a Armstrong"<<endl;
    //  }else {
    //     cout<<"Not a Armstrong"<<endl;
    //  }
    cout<<gcd(0,24)<<endl;

return 0;
}