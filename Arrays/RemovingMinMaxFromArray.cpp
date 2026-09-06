class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minindex = -1;
        int maxindex = -1;
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        for(int i = 0 ;i<n;i++){
            if(nums[i]==maxi) maxindex = i;
            if(nums[i]==mini) minindex = i;
        }
        int left = max(minindex,maxindex)+1;
        int right  = n-min(minindex,maxindex);
        int both = min(minindex,maxindex)+1+n-max(minindex,maxindex);
        return min({left,right,both});
    }
};
