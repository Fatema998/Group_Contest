#include <bits/stdc++.h>
#define ll long long
using namespace std;

void range_sum(vector<int> &arr, vector<ll> &pre)
{
    int n = arr.size();
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
}

ll rangeSum(int i, int j, vector<ll> &pre)
{
    if (i == 0)
        return pre[j];
    return pre[j] - pre[i - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<ll> pre(n);
    range_sum(a, pre);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << rangeSum(l, r, pre) << '\n';
    }

    return 0;
}
