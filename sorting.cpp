
// bubble sort

// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[],int n){
//     for(int i=0; i<n-1;i++){
//         for (int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// void printArray(int arr[],int n){
//     for ( int i=0;i<n;i++){
//         cout<<arr[i]<<"";
//     }
//     cout<<endl;
// }
// int main(){
//     int n =5; 
//     int arr[]={1,3,4,5,9};
//     bubbleSort (arr,n);
//     printArray(arr,n);



// return 0;
// }


// #include<iostream>
// using namespace std;



// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"";
//     }
// }

// void selectionSort( int arr[],int n){
//     for( int i=0;i<n-1;i++){
//         int smallestIdx=i;
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[smallestIdx])
//             smallestIdx=j;
//         }
//         swap(arr[i],arr[smallestIdx]);

//     }
// }

// int main(){
//     int n =5;
//     int arr[]={3,4,7,6,1};
//     printArray(arr,n);
//     selectionSort(arr,n);

// return 0;
// }

// insertion  sort
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    int n = 5;
    int arr[] = {3, 4, 7, 6, 1};

    cout << "Before Sorting: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "After Sorting: ";
    printArray(arr, n);

    return 0;
}
