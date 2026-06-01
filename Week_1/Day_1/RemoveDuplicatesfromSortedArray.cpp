class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1 ,encountered;
        encountered = nums[0];
        for(int i = 1 ; i<nums.size();i++){
            if(nums[i] != encountered){
                encountered = nums[i];
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return j;
    }
};
