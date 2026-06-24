class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       set<int>st;

       for(int i : nums){
        st.insert(i);
       }

       nums.assign(st.begin(), st.end());

        return nums.size();
    }
};