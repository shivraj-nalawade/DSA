class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i=0, j= n-1, k=n-1;
        vector<int> result(n);
        while(k>=0){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            if(a > b){
                result[k]= a;
                i++;
            }
            else{
                result[k]= b;
                j--;
            }
            k--;
        }
        return result;
    }
};