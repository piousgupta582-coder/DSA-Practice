class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0,a=0;
        int el;
        for(int i = 0;i<n;i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }
            else if(el == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(int j = 0;j<n;j++){
           if(nums[j] == el) a++;
        }
        if(a>(n/2)) return el;
        return -1;
    }
};
