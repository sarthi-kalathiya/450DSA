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

int kadane(int arr[], int n)
{
    int best = arr[0];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(sum, best);
    }
    return best;
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
    int ans = kadane(arr, n);
    cout << ans;
    return 0;
}
