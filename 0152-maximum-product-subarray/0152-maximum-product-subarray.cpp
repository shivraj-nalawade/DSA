class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int maxEnding = arr[0];
        int minEnding = arr[0];
        int result = arr[0];

        for(int i=1; i<n; i++){
            int v1 = arr[i];
            int v2 = maxEnding * arr[i];
            int v3 = minEnding * arr[i];

            maxEnding = max(v1, max(v2, v3));
            minEnding = min(v1, min(v2, v3));

            result = max(result, max(maxEnding, minEnding));
        }
        return result;
    }
};