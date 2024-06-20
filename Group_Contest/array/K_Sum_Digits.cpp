// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int sum = 0, m;
//     int n;
//     cin >> n;

//     while (n > 0)
//     {
//         /* code */
//         m = n % 10;
//         sum = sum + m;
//         n = n / 10;
//     }
//     cout << sum << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int sum = 0;
//     int n;
//     cin >> n;
//     string digits;
//     cin >> digits;
//     for (auto digit : digits)
//     {
//         sum += (digit - '0');
//     }
//     cout << sum << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    int n;
    cin >> n;
    string digits;
    cin >> digits;
    for (auto digit : digits)
    {
        sum += (digit - '0');
    }
    cout << sum << endl;

    return 0;
}