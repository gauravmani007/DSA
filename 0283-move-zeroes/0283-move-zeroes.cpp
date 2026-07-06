class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        vector<int>num1;
        vector<int>num2;


        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                num1.push_back(nums[i]);
            }else{

                num2.push_back(nums[i]);
            }
        }
        
        num2.insert(num2.end(), num1.begin(), num1.end());


        for(int i=0;i<n; i++){
            nums[i] = num2[i];
        }

        }
    
};