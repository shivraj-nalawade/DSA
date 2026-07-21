class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        

        sort(arr.begin(), arr.end());

        int maxDiff = INT_MAX;
        int resSum = 0;

        for(int i=0; i<n-2; i++){
            int j = i+1, k= n-1;

            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                int diff = abs(sum - target);
                if(diff < maxDiff){
                    maxDiff = diff;
                    resSum = sum;
                }

                if(sum < target){
                    j++;
                }
                else if(sum > target){
                    k--;
                }
                else{
                   return sum;
                }        
            }
        }
        
       return resSum;
    }
};