class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, maxFreq = 0, maxWindow = 0;

        for(int right = 0; right < s.length(); right++){
            freq[s[right]-'A']++;
            
            maxFreq = max(maxFreq, freq[s[right]-'A']);

            int windowLength = right - left + 1;

            if(windowLength - maxFreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            maxWindow = max(maxWindow, right-left+1);
        }
        return maxWindow;
    }
};