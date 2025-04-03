#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        // creating a map

        unordered_set <int> st;

        // inserting all the elements in the map

        for(int i = 0 ; i < nums.size() ; i++)
        {
            st.insert(nums[i]);
        }

        int longest = 0;  // measures the length of the sequence 

        // looking for the sequence starter 

        for(int num : nums)
        {
            // find a number such that (num-1) doesn't exist

            if(st.find(num-1) == st.end())
            {
                int curr_num = num;
                int curr_streak = 1;

                // count the lenght of the sequence 

                while(st.find(curr_num+1) != st.end())
                {
                    curr_num++;
                    curr_streak++;
                }

                longest = max(longest,curr_streak);
            }
        }

        return longest;

    }
};
