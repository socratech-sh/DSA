#include <iostream>
#include <unordered_map>
#include <vector>
typedef std::vector<int> array;


int subArraySum(const array& nums, int k) {
    std::unordered_map<int, int> count{
        { 0, 1 }
    };

    auto curr = int {};
    auto ans  = int {};

    for (auto num: nums) {
        curr += num;
        if ( count[curr - k] ) {
            ans += count[curr - k];            
        }

        if ( count[curr] ) {
            count[curr] += 1;
        } else {
            count[curr] = 1;
        }
    }

    return ans;
}


auto main() -> int {
    array nums{ 1, 1, 1 };
    int result = subArraySum(nums, 2);
    std::cout << result << "\n";
    return 0;
}

