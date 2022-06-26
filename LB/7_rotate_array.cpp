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
void rotate(int arr[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        swap(arr[i], arr[i + 1]);
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
    deba(arr);
    rotate(arr, n);
    deba(arr);
    return 0;
}
