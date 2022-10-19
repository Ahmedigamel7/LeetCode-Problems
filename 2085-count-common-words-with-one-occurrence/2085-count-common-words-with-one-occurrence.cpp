class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> count;
	    
        for (auto &w : words1)
		     ++count[w];
        
        int res=0;

	    for (auto &w : words2)
	    {
		 auto it = count.find(w);
            
		 if (it == count.end()) continue;
			
            if (it->second == 1)
			{
				res++;
				it->second -= 1;
			}
			else if (it->second == 0)
			{
				res--;
				it->second -= 1;
			}
         }
	return res;
    }
};