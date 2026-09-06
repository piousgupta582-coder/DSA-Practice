// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mp;
        for(int  i =0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                int j = mp[target - nums[i]];
                return {i,j};
            }
            mp[nums[i]] = i;
        }
        return {0,0};
    }
};
