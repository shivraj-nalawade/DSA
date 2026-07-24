class Solution {
public:
    bool valid(vector<int> &have, vector<int> &needed){
            for(int i=0; i<256; i++){
                if(have[i] < needed[i]){
                    return false;
                }
            }
            return true;
    }

    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(n>m) return "";

        vector<int> have(256, 0);
        vector<int> needed(256,0);
        
        for(int i=0; i<n; i++){
           needed[t[i]]++;
        }

        int low=0, high=0;
        int start=-1, res = INT_MAX;

        for(int high= 0; high<m; high++){
            have[s[high]]++;

            while(valid(have, needed)){
                int len = high - low + 1;

                if(res > len){
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }

        if(res==INT_MAX) return "";

        return s.substr(start, res);
     }
};