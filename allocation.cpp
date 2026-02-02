// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid(vector<int>&arr,int n,int m,int maxAllowedPages){
//     int students=1,page=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAllowedPages){
//             return false;
//         }
//         if(page+arr[i]<=maxAllowedPages){
//             page+=arr[i];
//         }else{
//             students++;
//             page=arr[i];

//         }
//     }
//     return students>m?false:true;
// }
// int allocateBooks(vector<int>&arr,int n,int m){
//     if(m>n){
//         return-1;
//     }
//     int sum=1;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int ans=-1;
//     int st=0,end =sum;
//     while (st<=end){
//         int mid=st+(end-st)/2;
//         if(isValid(arr,n,m,mid)){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;
  
// }
// int main(){
//     vector<int>arr{2,1,3,4};
//     int n=4,m=2;
//     cout<<allocateBooks(arr,n,m)<<endl;

// return 0;
// }


// painter partition problem 


// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&arr,int n,int m,int maxAllowedTime){
    int painter=1,time =0;

    for(int i=0; i<n; i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;

}
int minTimeToPaint(vector<int>&arr,int n,int m){
    int sum =0,maxVal=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    int st=maxVal,end=sum,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={40,30,10,20};
    int n=4,m=2;
    cout<<minTimeToPaint(arr,n,m)<<endl;
    return 0;

return 0;
}