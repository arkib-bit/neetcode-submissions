class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] ans = new int[2*nums.length];
        int k = 0;
        for(int i = 0 ; i<ans.length;i++)
        {
            if(i<nums.length)
            ans[i] = nums[i];
            else
            {
            ans[i] = nums[k];
            k++;
            } 
        }
        return ans;
    }
}