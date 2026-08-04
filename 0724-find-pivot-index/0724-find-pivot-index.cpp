class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int left=0, totalSum=0;
        for(int i=0; i<n; i++){
            totalSum+= nums[i];
        }
        if (totalSum - nums[0] == 0){
            return 0;
        }
          

        for(int i=1; i<n; i++){

            left += nums[i-1];
            int right = totalSum -  nums[i] - left;

            if(left==right){
                return i;
            }
        }
        return -1;
    }
};