class Solution {
public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
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