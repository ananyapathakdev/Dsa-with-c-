
#include<bits/stdc++.h>
using namespace std;
// bool linearSearch(int mat[][3],int rows,int cols,int key){
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols;j++){
//             if (mat[i][j]==key){
//                 return true;
//             }
//         }
//     }
// }

//  int getMaxSum(int mat[][3],int rows,int cols){
//     int maxRowSum=INT_MIN;
//     for(int i=0;i<rows;i++){
//         int rowSumI=0;
//         for(int j=0;j<cols;j++){
//             rowSumI+=mat[i][j];
//         }
//         maxRowSum=max(maxRowSum,rowSumI);
//         }
//         return  maxRowSum;
//  }

int diagonalSum(int mat[][4],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=mat[i][i];
    }
    return sum;
}
int main(){

    int matrix[4][4]={{1,2,3,4},{4,5,6,6},{7,8,9,7},{6,10,11,12}};
    int n=4;
    cout<<diagonalSum(matrix,n)<<endl;

    // int arr[5]={4,5,25,6,8};
    //  int matrix[4][3];
    //  int matrix[4][3]={{3,4,5}, {4,7,8},{7,2,4},{5,3,6}};
    // int rows=4;
    // int col=3;
    // cout<< matrix[4][3]<<endl;

// input

//     for ( int i=0;i<rows;i++){
//         for ( int j=0;j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     // output 
//     for(int i=0;i<rows;i++){
//         for (int j=0;j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//            cout<<endl;
//     }
    

// return 0;

}