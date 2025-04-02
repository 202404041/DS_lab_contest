#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> freq_mp;

    // making a frequency map

        for(char c : s)
        {
            freq_mp[c]++;
        }

        // finding the character with frequency == 1

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(freq_mp[s[i]] == 1)
            {
                return i;
            }
        }

        // if no match is found 
        return -1 ;

    }
};
