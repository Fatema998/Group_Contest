// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> a[i];
//     }
//     int minVal = INT_MAX;
//     int maxVal = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         swap(minVal, maxVal);
//     }
//     for (auto ans : a)
//     {
//         cout << ans << " ";
//     }

//     return 0;
// }
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
        cin >> a[i];
    }

    int minVal = INT_MAX, maxVal = INT_MIN;
    int minIndex = -1, maxIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < minVal)
        {
            minVal = a[i];
            minIndex = i;
        }
        if (a[i] > maxVal)
        {
            maxVal = a[i];
            maxIndex = i;
        }
    }

    swap(a[minIndex], a[maxIndex]);

    for (auto ans : a)
    {
        cout << ans << " ";
    }

    return 0;
}
