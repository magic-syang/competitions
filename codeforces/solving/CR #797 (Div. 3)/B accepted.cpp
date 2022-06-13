#include <bits/stdc++.h>
#define INPUT_PATH "../../in.in"
using namespace std;
const int N = 5e4 + 5;
int a[N], b[N], diff[N];
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
        fill(diff, diff + N, 0);
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int f = 0;
        for (int i = 0; i < n; i++)
        {
            diff[i] = a[i] - b[i];
            if (diff[i] < 0)
            {
                f = 1;
                cout << "NO\n";
                break;
            }
        }
        if (f)
            continue;

        int _max = -1, idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (diff[i] > _max)
            {
                _max = diff[i];
                idx = i;
            }
        }

        f = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0 && _max > diff[i])
            {
                f = 1;
                cout << "NO\n";
                break;
            }
        }
        if (!f)
        {
            cout << "YES\n";
        }
    }
}