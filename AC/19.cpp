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
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0], max_profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++)
        {

            // Checking for lower buy value
            if (buy > prices[i])
                buy = prices[i];

            // Checking for higher profit
            else if (prices[i] - buy > max_profit)
                max_profit = prices[i] - buy;
        }
        return max_profit;
    }
};

int32_t main()
{
    fastios;

    return 0;
}