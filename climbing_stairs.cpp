/*
class Solution {
public:
    int dp[50];
    int fun(int n) {
        if (n <= 2)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = fun(n-1)+fun(n-2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return fun(n);
    }
};
*/