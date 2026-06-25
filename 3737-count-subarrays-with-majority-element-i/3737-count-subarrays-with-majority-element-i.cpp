class Solution {
public:

    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == target){
                nums[i] = 1;
            }else{
                nums[i] = -1;
            }
        }

        for(int i=0; i<n; i++){
            int res = 0;
            for(int j=i; j<n; j++){
                 res +=  nums[j];

                 if(res > 0){
                    count++;
                 }
            }
        }

    return count; 
    
    }
};