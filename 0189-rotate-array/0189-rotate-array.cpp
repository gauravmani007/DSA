class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int>dq;
        
        for(int i=0; i<n; i++){
            dq.push_back(nums[i]);
        }

        for(int i=0; i<k; i++){
            int val = dq.back();
            dq.pop_back();
            dq.push_front(val);
        }
        
        nums.assign(dq.begin(), dq.end());
    }
};