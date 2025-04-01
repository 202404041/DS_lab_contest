#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int x = target - curr;

            if (mp.find(x) != mp.end()) {
                return {mp[x], i};
            }

            mp[curr] = i; // Store the current number's index
        }

        return {}; // Return empty vector if no solution found
    }
};
