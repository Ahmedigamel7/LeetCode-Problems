class Solution {
public:
    int findMaxK(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i = 0; 
    while ( i < nums.size() && nums[i] < 0  )
    {
        for (int j = nums.size() - 1; j >=0  &&  nums[j]>0 ; j--)
        {
            if (nums[j] + nums[i]==0)
                return abs(nums[i]);
        }

        i++;
    }
    return -1;
    }
};