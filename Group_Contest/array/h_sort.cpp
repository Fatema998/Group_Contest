#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    for (int i = 0; i <= n; i++)
    {
        /* code */
        for (int j = i + 1; j <= n; j++)
        {
            /* code */
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (auto val : a)
    {
        cout << val << " ";
    }

    return 0;
}