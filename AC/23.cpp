// created by @AM
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
#define fastios                          \
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
#define deba(arr)               \
       cout << #arr << " ~ [ "; \
       for (auto n : arr)       \
              cout << n << ' '; \
       cout << ']' << endl;
#define debap(arr)                                       \
       cout << #arr << " ~ [ ";                          \
       for (auto n : arr)                                \
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
       vector<int> productExceptSelf(vector<int> &nums)
       {
              int n = nums.size();
              vector<int> v(nums.size(), 0);
              int c = count(nums.begin(), nums.end(), 0);
              if (c > 1)
              {
                     return v;
              }
              else if (c == 1)
              {
                     for (int i = 0; i < n; i++)
                     {
                            if (nums[i] == 0)
                            {
                                   nums[i] = 1;
                                   int temp = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
                                   v[i] = temp;
                                   return v;
                            }
                     }
              }
              else
              {
                     int mul = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
                     for (int i = 0; i < nums.size(); i++)
                     {
                            v[i] = mul / nums[i];
                     }
                     return v;
              }
              // cout << mul;
       }
};
int32_t main()
{
       fastios;
       return 0;
}