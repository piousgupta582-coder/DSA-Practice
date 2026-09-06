class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        mp[nums[0]] = 1;
        for(int i = 1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                mp[nums[i]]+= 1;
            }
        }
        int a = 0;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second==1) a++;
        }
        return a;
    }
};
