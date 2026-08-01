class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int n = arr.size();
        int totalSum = arr[0];

        int maxSum = arr[0];
        int maxCircularSum = arr[0];

    
        int bestMaxEnding = arr[0];
        int bestMinEnding = arr[0];
        int minSum = arr[0];

        for(int i=1; i<n; i++){
            totalSum += arr[i];

            bestMaxEnding = max(bestMaxEnding + arr[i], arr[i]);
            maxSum = max(maxSum, bestMaxEnding);

            bestMinEnding = min(bestMinEnding + arr[i], arr[i]);
            minSum = min(minSum, bestMinEnding);
        }
        if(maxSum < 0){
            return maxSum;
        }

        maxCircularSum = totalSum- minSum;
        return max(maxSum, maxCircularSum);
    }
};