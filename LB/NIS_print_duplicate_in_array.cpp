// created by @AM
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
#define fastios                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define pb push_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrall(x) sort(rall(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it++)
#define deb(x) cout << #x << ": " << x << endl;
#define deb2(x, y) cout << #x << ": " << x << " ~ " << #y << ": " << y << endl;
#define deba(arr)            \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << ' ';    \
    cout << ']' << endl;
#define debap(arr)                                 \
    cout << #arr << " ~ [ ";                       \
    for (auto n : arr)                             \
        cout << n.first << '-' << n.second << ' '; \
    cout << ']' << endl;
#define nl "\n"
const double PI = 3.1415926535;
#define PI 3.141592653589793238462643383279502884L
int N = 1;
// datatypes
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpii vector<pii>
#define vpll vector<pll>
/*
vector<int> duplicates(int arr[], int n) //don't know why this works in 1.56 seconds
{
    vector<int> v;
    map<int, int> m;
    unordered_set<int> s;
    for (int i = 0; i < n; ++i)
    {
        if (m[arr[i]] == 1)
        {
            s.insert(arr[i]);
        }
        m[arr[i]]++;
    }
    for (auto x : s)
    {
        v.push_back(x);
    }
    if (v.size() > 0)
    {
        sort(v.begin(), v.end());
        return v;
    }
    else
    {
        v.push_back(-1);
        return v;
    }
}
*/

vector<int> duplicates(int arr[], int n)//works in 0.74 seconds
{
    vector<int> v;
    int arr2[n] = {0};
    for (int i = 0; i < n; ++i)
    {
        arr2[arr[i]]++;
    }
    vector<int> vq;
    for (int i = 0; i < n; ++i)
    {
        vq.push_back(arr[i]);
    }
    unique(vq.begin(), vq.end());
    set<int> s;
    for (auto x : vq)
    {
        if (arr2[x] > 1)
        {
            s.insert(x);
        }
    }
    for (auto x : s)
    {
        v.push_back(x);
    }
    if (v.size() > 0)
    {
        return v;
    }
    else
    {
        v.push_back(-1);
        return v;
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
    vi op = duplicates(arr, n);
    deba(op);
    return 0;
}
