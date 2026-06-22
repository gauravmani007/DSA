class Solution {
public:
    int maxNumberOfBalloons(string s) {
        int m = s.size();

        map<char,int>mp;
        int result = INT_MAX;

        for(char ch : s){
            mp[ch]++;
        }

        return min({mp['b'], mp['a'], mp['l']/2, mp['o']/2, mp['n']});

    }
};