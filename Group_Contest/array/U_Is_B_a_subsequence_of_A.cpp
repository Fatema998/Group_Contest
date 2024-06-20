#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> b[i];
    }
    for (int i = 0; i <= n; i++)
    {
        /* code */
        for (int j = 0; j <= m; j++)
        {
            /* code */
            if(a[i]<b[i])
            {
                a[i]++;

            }
            else if(a[i]==b[i])
            {
                a[i]++;
                b[i]++;
            }
        }
    }

    return 0;
}