
// created by @AM
#include <bits/stdc++.h>

using namespace std;
#define fastios                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
/*
void sort012(int arr[], int n) //1.5 second
{
    sort(arr, arr + n);
}
*/

void DNFsort(int arr[], int n) // 0.98 second
{
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
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
    DNFsort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
