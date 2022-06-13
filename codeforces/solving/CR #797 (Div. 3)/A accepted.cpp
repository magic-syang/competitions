#include <bits/stdc++.h>
#define INPUT_PATH "../../in.in"
using namespace std;
const int N = 1e5 + 5;
int main()
{
#ifndef ONLINE_JUDGE
    freopen(INPUT_PATH, "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rest_of = n % 3;
        int base = n / 3;
        if (rest_of == 0)
        {
            cout << base << " " << base + 1 << " " << base - 1 << "\n";
        }
        else if (rest_of == 1)
        {
            cout << base << " " << base + 2 << " " << base - 1 << "\n";
        }
        else
        {
            cout << base + 1 << " " << base + 2 << " " << base - 1 << "\n";
        }
    }
}