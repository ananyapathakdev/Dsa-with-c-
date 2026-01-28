// #include<iostream>
// using namespace std;
// int main(){
//     int marks[4]={100,20,34,30};
//     cout<<marks[0] <<endl;
//     cout<<marks[1] <<endl;
//     cout<<marks[2] <<endl;
//     cout<<marks[3] <<endl;


// return 0;
// }    




// loop

//finrd the smallest value

// #include <iostream>
// #include <climits>     // for INT_MAX
// #include <algorithm>   // for min()

// using namespace std;

// int main(){
//     int num[]={5,29,40,-12,45,-20};
//     int size=6;

//     int smallest = INT_MAX;
//     int largest=INT_MIN;

//     for(int i=0; i<size; i++){
//         smallest = min(num[i], smallest);
//         largest=max(num[i],largest);
//     }

//     cout << "Smallest element: " << smallest<<endl;
//      cout << "largest element: " << largest<<endl;


//     return 0;
// }



// linear search

// #include<iostream>
// using namespace std;

//     int linearsearch(int arr[], int sz ,int target){
//         for(int i=0;i<sz;i++)
//     {
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return-1;
//     }
//     int main(){
//         int arr[]={4,2,7,8,1,2,5};
//         int sz=7;
//         int target=8;
//         cout<<linearsearch(arr,sz,target)<<endl;
//         return 0;
//         }



// vector


// function 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size="<<endl;
     vec.push_back (25);
     vec.push_back (26);
     vec.push_back (27);
     cout<<"after push back size="<<vec.size()<<endl;
     vec.pop_back();
     cout<<vec.back()<<endl;
     cout<<vec.at(0)<<endl;
     
     for(int val:vec){
        cout<<val<<endl;
     }


return 0;
}








