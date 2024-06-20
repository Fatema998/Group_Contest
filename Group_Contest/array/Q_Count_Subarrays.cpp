#include <bits/stdc++.h>
#define ll long long
using namespace std;

int count(vector<int> &a, int n)
{
    int count = 0;
    int length = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            length++;
        }
        else
        {
            count += (length * (length + 1)) / 2;
            length--;
        }
    }

    count += (length * (length + 1)) / 2;

    return count;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        cout << count(A, N) << endl;
    }

    return 0;
}
