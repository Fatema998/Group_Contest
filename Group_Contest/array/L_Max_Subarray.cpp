#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
            cout << a[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            int v = a[i];
            for (int j = i + 1; j < n; j++)
            {
                /* code */
                v = max(v, a[j]);
                cout << v << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}