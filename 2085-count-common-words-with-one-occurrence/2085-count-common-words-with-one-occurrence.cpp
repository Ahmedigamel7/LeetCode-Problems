class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
    unordered_map<string, int> count;
	for (int i = 0; i < words1.size(); i++)
	{
		++count[words1[i]];
	}
	int res=0;

	for (int i = 0; i < words2.size(); i++)
	{
		auto it = count.find(words2[i]);
		if (it != count.end()) {
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
	}
	return res;
    }
};