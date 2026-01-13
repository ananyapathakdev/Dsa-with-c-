// #include <iostream>
//  using  namespace std;
// int main(){
//     int age;
//     cout<<"enter your age :";
//     cin>>age;
//     if( age>=18){
//         cout<<"ready for vote\n";
//     }
//     else{
//         cout<<"not ready";
//     }
  
//  }




// if- elseif-else


// #include <iostream>
//  using  namespace std;
// int main(){
//     int marks;
//     cout<<"enter your marks:";
//     cin>>marks;
//     if( marks>=90){
//         cout<<"A \n";
//     }
//         else if(marks>=80&&marks<90){
//             cout<<"B \n";
//         }
    
//     else{
//         cout<<"C";
//     }
  
//  }


// #include <iostream>
//  using  namespace std;
// int main(){
//     char ch;
//     cout<<"enter char:";
//     cin>>ch;
//     if ( ch>='a' && ch<='z' ) {
//         cout<<"lowecase\n";
//     }else{
//         cout<<"uppercase\n";
//     }
//  }



// #include <iostream>
//  using  namespace std;
// int main(){
//     int n=45;
//     cout<<(n >= 0 ?"postive":"negative")<<endl;
// }




// loops


// while loops

 
// #include <iostream>
//  using  namespace std;
// int main(){
//     int n=29;
//     int count=1;
//     while(count<n){
//     cout<<count<< " ";
//     count++;
//     }
//     return 0;
// }




// for loop



// #include <iostream>
//  using  namespace std;
// int main(){
//     int n=10;
//     for( int i=0; i<=n; i=i+1)
//     {
//         cout<<i<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// sum of odd number 1 to n

  
// #include <iostream>
//  using  namespace std;
// int main(){
//     int n=10;
//     int oddSum= 0;
//     for( int i=0; i<=n;i++)
//     {
//         if(i%2 !=0){
//             oddSum+=i;
//         }
//     }
//     cout<<"oddSum="<<oddSum<<endl;
// }




//  do while loop


 #include <iostream>
 using  namespace std;
int main(){
    int n=10;
    int i=0;
    do{
        cout<<i<<"";
        i++;
    } 
    while(i<=n);
    
    cout<<endl;
}
