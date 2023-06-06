class Solution {
private:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        if(low>high){
            return -1;
        }
        int mid = low + (high-low)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]){
            return binarySearch(nums, mid+1, high, target);
        }else{
            return binarySearch(nums, low, mid-1, target);
        }
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binarySearch(nums, 0, n-1, target);
    }
};