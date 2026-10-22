class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    vector<pair<int,int>> p;
    vector<int> tf;
    //loop to find the frequency of the numbers in the array.
    for(int i = 0 ; i < nums.size(); i ++)
    {
        if(m.find(nums[i]) == m.end())
            m.insert({nums[i],1});
        else
            m[nums[i]]++;
    }
    for(auto it = m.begin() ; it != m.end() ; it++)
    {
            p.push_back({it->second,it->first});
    }
    sort(p.rbegin(),p.rend());// to sort in descending. 
    for(int i = 0 ; i < k ; i++)
        tf.push_back(p[i].second);
    
    return tf;
    }
};
