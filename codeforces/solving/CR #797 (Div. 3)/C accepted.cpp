#include <bits/stdc++.h>
#define INPUT_PATH "../../in.in"
using namespace std;
const int N = 2e5 + 5;
int s[N], f[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen(INPUT_PATH, "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> f[i];
        int start = 0, end = 0;
        for (int i = 0; i < n; i++)
        {
            int d = 0;
            // calculate duration of i-th task
            d = s[i] <= end ? d = f[i] - end : d = f[i] - s[i];
            end = f[i];
            cout << d << " \n"[i == n - 1];
        }
    }
}