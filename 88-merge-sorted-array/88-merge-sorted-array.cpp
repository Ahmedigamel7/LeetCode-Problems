class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
   
    int i = m - 1, j = n - 1, endOfN1 = m + n - 1;

    for (; i >= 0 && j>=0; )
    {
        if (nums1[i] > nums2[j])
            nums1[endOfN1--] = nums1[i--];
        else
            nums1[endOfN1--] = nums2[j--];


    }
    while (j >= 0)
    {
        nums1[endOfN1--] = nums2[j--];
    }
    
    }
    
};  

