class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;
        vector<int>hash(n+1, 0);

        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }

        for(int i=1; i<n+1; i++){
            if(hash[i] == 0){
                ans.push_back(i);
            }
        }
       return ans;
    }

};
    //     set<int>st;
    //     vector<int>ans;

    //     for(auto it : nums){
    //         st.insert(it);
    //     }

    //     for(int i=1; i<=n; i++){
    //         if(st.find(i) == st.end()){
    //             ans.push_back(i);
    //         }
    //     }
       
    //     return ans;
    // }
// };