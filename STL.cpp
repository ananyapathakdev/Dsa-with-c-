#include<iostream> 
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main(){
    // list<int> l={1,2,3,4,5};
    map<string,int >m;

    m["tv"]=100;
    m["laptop"]=10;
    m["tablet"]=40;
    m["watch"]=50;
    
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(4);
    // vec.push_back(5); 
    // vec.push_back(6);
    
    for(auto p: m){
        cout<<p.first<<""<<p.second<<endl;

    } 
    cout<<endl;

    // cout <<"size of vector =" <<" "<<vec.size()<<endl;

return 0;
}