// // #include <iostream>
// // #include <climits>
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int n;
// //     cin >> n;

// //     int a[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> a[i];
// //     }

// //     int res = INT_MAX; // Initialize res with maximum possible value
// //     for (int i = 0; i < n; i++)
// //     {
// //         res = min(res, a[i]);
// //     }

// //     cout << res << " " << a[i];
// //     return 0;
// // }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int res = INT_MAX;
//     int minIndex = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] < res)
//         {
//             res = a[i];
//             minIndex = i;
//         }
//     }

//     cout << res << " " << a[minIndex] << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     int minVal = INT_MAX;
//     int minIndex = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] < minVal)
//         {
//             minVal = a[i];
//             minIndex = i;
//         }
//     }

//     cout << minVal << " " << minIndex << endl;

//     return 0;
// }

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
//         cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
//     for (auto val : a)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }
