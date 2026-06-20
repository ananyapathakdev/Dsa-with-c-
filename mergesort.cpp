// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>&arr,int st,int mid,int end){
//     vector<int>temp;
//     int i=st ,j=mid+1;

//     while(i<=mid&& j<=end){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j<=mid){
//         temp.push_back(arr[i]);
//         j++;
//     }
//     for(int idx=0;idx<temp.size();idx++){
//         arr[idx+st]=temp[idx];
//     }
// }

// void mergeSort(vector<int>&arr,int st,int end){
//     if(st<end){
//         int mid=st+(end-st)/2;

//         mergeSort(arr,st,mid);  //left half 
//         mergeSort(arr,st,mid);  // right half 
        
//         merge(arr,st,mid,end);

//     }

// }
// int main(){
//     vector<int>arr={12,31,35,8,32,17};
//     mergeSort(arr,0,arr.size()-1);

//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// count inversions


#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;
    int ivnCount=0;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
           temp.push_back(arr[i]);
           i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            ivnCount+=(mid+1-i);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    return ivnCount;

}
int mergeSort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int leftInvCount=mergeSort(arr,st,mid);
        int rightInvCount=mergeSort(arr,mid+1,end);

        int invCount=merge(arr,st,mid,end);
        return leftInvCount+rightInvCount+invCount;
    }
    return 0;

}
int main(){
    vector<int>arr={6,3,5,2,7};
    int ans= mergeSort(arr,0,arr.size()-1);
    cout<<"inv count :"<<ans<<endl;
    return 0;

}
