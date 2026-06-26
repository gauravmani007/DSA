class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int cumsum = 0;
        mp[0] = 1;
        long long valid = 0;
        long long result = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                valid += mp[cumsum];
                cumsum++;
            }else{
                cumsum -= 1;
                valid -= mp[cumsum];
            }

            mp[cumsum] += 1;
            result += valid;
        }
        
        return result;
    }
};