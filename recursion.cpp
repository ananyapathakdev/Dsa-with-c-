// #include<iostream>
// using namespace std;
// // void number(int n){
// //     if (n==0){
// //         return;
// //     }
// //     cout<<n<<" ";
// //     number(n-1);
// // }

// // factorial of a number


// // int factorial(int n){
// //     if(n==0){
// //         return 1;
// //     }
// //        return n*factorial(n-1);
// // } 


// // sum of n number 
//  int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
//  }
// int main(){
//     cout<<sum(5)<<endl;

// return 0;
// }



// rat in a maze
#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat, int r, int c, string path, vector<string>& ans) {
    int n = mat.size();

    // boundary + blocked + visited check
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1) {
        return;
    }

    // destination
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    // mark visited
    mat[r][c] = -1;

    helper(mat, r + 1, c, path + "D", ans);
    helper(mat, r - 1, c, path + "U", ans);
    helper(mat, r, c - 1, path + "L", ans);
    helper(mat, r, c + 1, path + "R", ans);

    // unvisit
    mat[r][c] = 1;
}

vector<string> findPath(vector<vector<int>>& mat) {
    vector<string> ans;
    if (mat[0][0] == 0) return ans;

    helper(mat, 0, 0, "", ans);
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string> ans = findPath(mat);

    for (string path : ans) {
        cout << path << endl;
    }
}





