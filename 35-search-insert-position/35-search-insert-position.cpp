class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    
    int counter=0;
    for( int i=0 ;i < nums.size()  ; i++ )
        {
            if (nums[i] < target)
                ++counter;
            else
                break;
        }
    
    return counter;
        
    }
};