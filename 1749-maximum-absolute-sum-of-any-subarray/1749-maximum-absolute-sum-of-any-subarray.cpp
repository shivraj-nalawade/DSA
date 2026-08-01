class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int n= arr.size();
        int maxSumEnding = arr[0];
        int minSumEnding = arr[0];
        int result1= arr[0];
        int result2 = arr[0];
        int result = arr[0];

        for(int i=1; i<n; i++){
            maxSumEnding =  max(maxSumEnding+arr[i], arr[i]);

            result1 = max(result1, maxSumEnding);
        }

        for(int i=1; i<n; i++){
            minSumEnding = min(minSumEnding+arr[i], arr[i]);

            result2 = min(result2, minSumEnding);
        }
    return max(result1, abs(result2));   
    }
};