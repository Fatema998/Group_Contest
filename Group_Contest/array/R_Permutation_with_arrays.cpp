#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    /* code */
    if (a == b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool arePermutations(int arr1[], int arr2[], int n, int m)
// {

//     if (n != m)
//     {
//         return false;
//     }

//     sort(arr1, arr1 + n);
//     sort(arr2, arr2 + m);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n];
//     int arr2[m];

//     if (arePermutations(arr1, arr2, n, m))
//     {
//         cout << "yes" << endl;
//     }
//     else
//     {
//         cout << "no" << endl;
//     }

//     return 0;
// }