class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0 ;
        int l = 0 ; 
        int r = heights.size() - 1;
        while(l < r)
        {
            int width = r - l;
            int height = min(heights[l],heights[r]);
            int curr = width*height;
            if(curr > area) area = curr;
            if(heights[l] <= heights[r])
            l++;
            else
            r--;
        }
        return area;
    }
};
