// max subarray sum


// #include<iostream>
// #include <climits>     // for INT_MAX
// using namespace std;
// int main(){
//     int n=5;
//     int arr[6]={2,3,5,5,6};
//     int maxSum=INT_MIN;
//     for( int st=0;st<n;st++){
//         int currSum=0;
//         for( int end=0;end<n;end++){
//             currSum+=arr[end];
//             maxSum= max(currSum,maxSum);
          
//         }
//     cout <<"max sub arraysum" <<maxSum<<endl;
//     }

// return 0;
// }



// Kadane's Algorithm 


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currSum = 0;
//         int maxSum = INT_MIN;

//         for (int val : nums) {
//             currSum += val;
//             maxSum = max(maxSum, currSum);

//             if (currSum < 0) {
//                 currSum = 0;
//             }
//         }
//         return maxSum;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << s.maxSubArray(nums);
//     return 0;
// }
 

// pair sum
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];

        if (pairSum > target) {
            j--;
        } else if (pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
