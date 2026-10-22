class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> n;
        int m;
        for(int i = 0 ; i < nums.size(); i++)
        {
            
            m = target - nums[i];

            if(n.find(m) != n.end())
                return {n[m],i};
            n[nums[i]] = i;

        }
        return {};
    }
};
