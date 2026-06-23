class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {

        int m = r - l + 1;

        vector<int> up(m, 1);
        vector<int> down(m, 1);

        vector<int> prefix(m + 1);
        vector<int> suffix(m + 1);

        vector<int> newUp(m);
        vector<int> newDown(m);

        for (int len = 2; len <= n; len++) {

            fill(prefix.begin(), prefix.end(), 0);
            fill(suffix.begin(), suffix.end(), 0);

            for (int i = 0; i < m; i++) {
                prefix[i + 1] = (prefix[i] + up[i]) % MOD;
            }

            for (int i = m - 1; i >= 0; i--) {
                suffix[i] = (suffix[i + 1] + down[i]) % MOD;
            }

            for (int i = 0; i < m; i++) {
                newDown[i] = prefix[i];
                newUp[i] = suffix[i + 1];
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;

        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return (int)ans;
    }
};