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
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (a[i] % 2 == 0)
//         {
//             cnt++;
//             cout << cnt << " ";
//         }
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

    int operations = 0;

    while (true)
    {
        bool all_even = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                all_even = false;
                break;
            }
        }
        if (!all_even)
            break;

        for (int i = 0; i < n; i++)
        {
            a[i] /= 2;
        }
        operations++;
    }

    cout << operations << endl;

    return 0;
}
