// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, fib = 0, fib_ = 1, next_ = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         if (i == 1)
//         {
//             cout << fib << " ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << fib_ << " ";
//             continue;
//         }
//         next_ = fib + fib_;
//         fib = fib_;
//         fib_ = next_;
//         cout << next_ << " ";

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

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int fib = 0, fib_ = 1, next_;
        for (int i = 3; i <= n; i++)
        {
            next_ = fib + fib_;
            fib = fib_;
            fib_ = next_;
        }
        cout << fib_ << endl;
    }

    return 0;
}
