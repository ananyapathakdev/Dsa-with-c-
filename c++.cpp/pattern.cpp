//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=4;
//     for( int i=1;i<=n;i++){

//         for( int j=1;j<=n;j++){
//             cout<<j <<" ";

//         }
//         cout<<endl;
//     }

// }


//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=4;
//     for( int i=1;i<=n;i++){

//         for( int j=1;j<=n;j++){
//             cout<<"*";

//         }
//         cout<<endl;
//     }

// }



//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=4;
//     for( int i=1;i<=n;i++){
//     char ch='A';
//         for( int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch=ch+1;

//         }
//         cout<<endl;
//     }

// }


//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=3;
//     int num=1;
//     for( int i=0;i<n;i++){

//         for( int j=0;j<n;j++){
//             cout<<num <<" ";
//             num++;

//         }
//         cout<<endl;
//     }

// }





//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=3; 
//     char  ch='A';
//     for( int i=0;i<n;i++){

//         for( int j=0;j<n;j++){
//             cout <<ch <<" ";
//             ch++;
//         }
//         cout<<endl;
//     }

// }


//  #include <iostream>
//  using  namespace std;
// int main(){
//     int n=3; 
//     char  ch='A';
//     for( int i=0;i<n;i++){
//         for( int j=0;j<n;j++){
//             cout <<ch <<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 1; j < i+1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
    
//     for(int i = 0; i < n; i++){
//         for(int j =i+1; j>0 ;j--){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     int num=1;
    
//     for(int i = 0; i < n; i++){

//         // space
//         for(int j =0; j<n-i; j++){
//             cout <<" ";
//         }
//         // num

//         for ( int j=0;j<n-1;j++){
//             cout<<i+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
    
//     for(int i = 0; i < n; i++){
//         for(int j =i+1; j>0; j--){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n = 4;

    // top
    
    for(int i = 0; i < n; i++){

        // space
        for(int j=0;j<n-i-1; j++){
            cout << " " ;
        }
        cout << "*";
        if(i!=0){
            // spaces
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
          cout<<"*";
        } 
        cout<<endl;
    }

    // bottom
    for(int i=0; i<n-1;i++){
        // space
         for(int j=0;j<i+1;j++){
            cout<<"";
         }

        cout<<"*";
        if(i!=n-1){
            // spaces
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
    }
    return 0;
}




