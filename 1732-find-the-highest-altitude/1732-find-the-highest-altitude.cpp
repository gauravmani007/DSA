class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        int result = 0;
       
        for(int i=1; i<n; i++){
            gain[i] = gain[i-1] + gain[i];
        }

        for(int i=0; i<n; i++){
            result = max(result, gain[i]);
        }

        return result;
    }
};