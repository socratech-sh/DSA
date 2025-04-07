#include <vector>
#include <iostream>
using namespace std;

vector<int> sortedSquares(vector<int> &nums) {
    vector<int> ans(nums.size());
    int n = nums.size();
    int left {};
    int right {n - 1};

    for(int i = n - 1; i > 0; i--) {
        int r_square = nums[right] * nums[right];
        int l_square = nums[left] * nums[left];
        if (r_square > l_square) {
            ans[i] = r_square;
            right --;
        } else {
            ans[i] = l_square;
            left++;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    nums = sortedSquares(nums);
    for(auto val: nums){
        cout << val << " ";
    }
    return 0;
}
