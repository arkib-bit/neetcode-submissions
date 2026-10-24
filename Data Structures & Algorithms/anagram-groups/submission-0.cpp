class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> m;
        string key;
        for(int i = 0 ; i < strs.size(); i++)
        {
            key = strs[i];
            sort(key.begin(),key.end());
            m[key].push_back(strs[i]);
        }
        for(auto it = m.begin(); it != m.end() ; it++)
        {
            result.push_back(it->second);
        }

        return result;
    }
};
