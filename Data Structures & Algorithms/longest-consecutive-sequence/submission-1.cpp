class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> m(nums.begin(),nums.end());
       int longest = 0;
       for(int num : m)
       {
        if(m.find(num - 1) == m.end())
        {
            int length = 1;
            while(m.find(num + length) != m.end())
            {
                length++;
            }
            longest = max(longest,length);
        }
       }
       return longest;
    }
};
