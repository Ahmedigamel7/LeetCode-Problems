class Solution {
public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
   // better Time complexity
    vector<pair<int,string>>hash;
        vector<string>res;
        for(int i=0; i<names.size(); i++) {
            hash.push_back({heights[i], names[i]});
        }
        sort(hash.begin(), hash.end());
        for(int i=names.size()-1; i>=0; i--) {
            res.push_back(hash[i].second);
        }
        return res;
   }
};
/*
    // better Memory & Terrible O(N^2) Runtime 
              for(int i=1;i<heights.size();i++){
                for(int j=0;j<heights.size()-i;j++){
                  if(heights[j] < heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    swap(names[j],names[j+1]);
                }
            }
        }
        return names; 
  }
   */
 
