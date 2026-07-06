class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        int count = 0;
        vector<bool>check(n, false);

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                if(i==j){
                    continue;
                }

                if(intervals[i][0] <= intervals[j][0] && intervals[i][1] >= intervals[j][1])
                    check[j] = true;

                if(intervals[i][0] == intervals[j][0] && intervals[i][1] == intervals[j][1])
                    continue;    
            }
        }

        int ans = 0;

        for(bool x : check){
            if(!x) ans++;
        }

        return ans;
    }
};