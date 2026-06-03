class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();

       sort(cost.begin(), cost.end(), greater<int>());

     
        int maxcost = 0;

            for(int i=0; i<n; i++){
                if(i%3 != 2){
                    maxcost += cost[i];
                }else{
                    continue;
                }
            }
        return maxcost;
    }
};