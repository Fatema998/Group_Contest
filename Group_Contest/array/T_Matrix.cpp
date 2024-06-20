#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int first_Sum = 0;
    int secnd_Sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            first_Sum += matrix[i][j];
            secnd_Sum += matrix[i][n - 1 - j];
        }
    }

    int ans = abs(first_Sum - secnd_Sum);
    cout << ans << endl;

    return 0;
}
