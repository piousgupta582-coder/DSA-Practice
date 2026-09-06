class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int a =0;
        int cnt =0;
        for(int i = 0;i<n;i++){
            if(nums[i]==1){
                a++;
                cnt = max(cnt,a);
            }
            else{
                a= 0;
            }
        }
        return cnt;
    }
};
