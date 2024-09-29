#include <bits/stdc++.h>
using namespace std;
int fn(int n)
{
    if (n == 0)
        return 1;
    int ans = n * fn(n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fn(n) << endl;
    return 0;
}