class Solution {
public:
    int minElement(vector<int>& nums) {
        int minnum = INT_MAX;
        for(int i=0; i < nums.size(); i++){
            string a = to_string(nums[i]);

            int sum = 0;
            for(char ch : a){
                sum += ch - '0';
            }
            nums[i] = sum;
            minnum = min(sum, minnum);
        }
        return minnum;
        }
};