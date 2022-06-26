// created by @AM
#include <bits/stdc++.h>

using namespace std;

#define fastios                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define deba(arr)            \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << ' ';    \
    cout << ']' << endl;

void MOVE(int arr[], int n) // 0.98 second
{
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (arr[m] < 0)
        {
            l++;
            m++;
        }
        else if (arr[m] >= 0)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
    reverse(arr, arr + n);
}

int32_t main()
{
    fastios;
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    MOVE(arr, n);
    deba(arr);
    return 0;
}
