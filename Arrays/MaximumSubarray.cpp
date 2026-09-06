class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        int a = INT_MIN;
        int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + nums[i];
        if(sum<0) {
            a  = max(sum,a);
            sum = 0;
        }
        else{
            a  = max(sum,a);
        }
        }
    return a;       
    }
};
