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
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         minVal = min(minVal, a[i]);
//         // if (a[i] == minVal)
//         //     cnt++;
//     }
//     for (int i = 0; i < n; i++)
//     {

//         if (a[i] == minVal)
//             cnt++;
//     }

//     // cnt++;
//     if (cnt % 2 == 1)
//     {
//         cnt++;
//         cout << "Lucky" << endl;
//     }
//     else
//     {
//         cnt++;
//         cout << "Unlucky" << endl;
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
        /* code */
        cin >> a[i];
    }
    int minVal = INT_MAX;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        minVal = min(a[i], minVal);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        // minVal=min(a[i],minVal);
        if (a[i] == minVal)
            cnt++;
    }
    if (cnt % 2 == 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}