class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      
      vector<int>concat; int i = 0, j = 0;

    for (; i < m&& j<n; )
    {
        if (nums1[i] <= nums2[j])
        {
            concat.push_back(nums1[i++]);
        }else
        {
           concat.push_back( nums2[j++]);
        }
    }
    while (j<n)concat.push_back(nums2[j++]);
    while (i<m)concat.push_back(nums1[i++]);
    nums1.clear();

    for (auto i : concat)
        nums1.push_back(i);
    }
};  

/*int i=m;
           while(i<m+n)
           { if(nums1[i]==0)
              nums1.pop_back();
              i++;
               
           }
        for (int i:nums2)
            nums1.push_back(i);
    
        sort(nums1.begin(),nums1.end());
           */