class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        int k = 1;
        for(int i = 1;i<n;i++){
            if(nums[j]!=nums[i]){//unique elemnt mila
                nums[j+1] = nums[i];
                j++;
                k++;               
            }
        }
        return k;
    }
};
