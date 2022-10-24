class Solution {
public:
vector<string> findWords(vector<string>& words) {

            vector<string> res;
            map<char, int> rows =
              {
               {'q',50},
               {'w',50},
               {'e',50},
               {'r',50},
               {'t',50},
               {'y',50},
               {'u',50},
               {'i',50},
               {'o',50},
               {'p',50},
               {'a',2},
               {'s',2},
               {'d',2},
               {'f',2},
               {'g',2},
               {'h',2},
               {'j',2},
               {'k',2},
               {'l',2},  
               {'z',1},
               {'x',1},
               {'c',1},
               {'v',1},
               {'b',1},
               {'n',1},
               {'m',1}
              };

             for (int i = 0; i < words.size(); i++)
               {
                    int rowCount=0;
                  for (char j : words[i])
                   {     
                     j = tolower(j);
                     rowCount += rows[j];
                   }
                   if (words[i].size() * 50 == rowCount || words[i].size() * 2 == rowCount || words[i].size() * 1 == rowCount)
                     res.push_back(words[i]);
               }       
                  return  res;
  }

};