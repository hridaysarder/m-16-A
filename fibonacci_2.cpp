#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 5;
ll dp[N];
ll fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    ll ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibo(n) << endl;
    return 0;
}