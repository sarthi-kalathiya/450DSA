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

int doUnion(int a[], int n, int b[], int m)
{
    // code here
    set<int> s;
    rep(i, 0, n)
    {
        s.insert(a[i]);
    }
    rep(i, 0, m)
    {
        s.insert(b[i]);
    }
    return s.size();
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
    int n1;
    cin >> n1;
    int arr2[n1];
    rep(i, 0, n1)
    {
        cin >> arr2[i];
    }
    int ans = doUnion(arr, n, arr2, n1);
    cout << ans;
    return 0;
}
