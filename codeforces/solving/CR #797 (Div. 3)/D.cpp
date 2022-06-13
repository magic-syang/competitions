#include <iostream>
#include <vector>
#define INPUT_PATH "../../in.in"
using namespace std;
const int N = 2e5 + 5;
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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        // prefix sum
        vector<int> sum_pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            sum_pre[i] = sum_pre[i - 1] + int(a[i - 1] == 'W');
        }
        int _min = INT_MAX;
        for (int i = k; i <= n; i++)
        {
            _min = min(_min, sum_pre[i] - sum_pre[i - k]);
        }
        cout << _min << "\n";
    }
}