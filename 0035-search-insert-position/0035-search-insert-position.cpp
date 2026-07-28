class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n-1;
        int index = n;
        while(st<=end){
            int mid = st + (end - st)/2;

            if(nums[mid] == target){
                index = mid;
                break;
            }
            else if(nums[mid] < target){
                st = mid +1;
            }
            else{
                index = mid;
                end = mid - 1;
            }
        }
        return index;
    }
};