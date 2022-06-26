// created by @AM
#include <bits/stdc++.h>

using namespace std;

#define fastios                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define pii pair<int, int>
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))

pii mxmn(int arr[], int n)
{
    pii data;
    int i;
    if (n % 2)
    {
        data.first = arr[0];
        data.second = arr[0];
        i = 1;
    }
    else
    {
        if (arr[0] > arr[1])
        {
            data.first = arr[1];
            data.second = arr[0];
        }
        else
        {
            data.first = arr[0];
            data.second = arr[1];
        }
        i = 2;
    }
    for (; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            data.first = min(arr[i + 1], data.first);
            data.second = max(arr[i], data.second);
        }
        else
        {
            data.first = min(arr[i], data.first);
            data.second = max(arr[i + 1], data.second);
        }
    }
    return data;
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
    pii ans = mxmn(arr, n);
    cout << ans.first << " " << ans.second;
    return 0;
}
