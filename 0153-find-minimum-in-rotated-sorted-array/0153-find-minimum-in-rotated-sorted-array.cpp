class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int st=0, end=n-1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(nums[mid] >= nums[0]){
                st = mid + 1;
            }
            else {
                ans = nums[mid];
                end = mid - 1;
            }
        }
        return ans;
    }
};