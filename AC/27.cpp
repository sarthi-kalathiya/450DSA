class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> &arr = nums;
        set<vector<int>> seet;
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int l, r;
        for (int i = 0; i < n; i++)
        {
            l = i + 1;
            r = n - 1;
            int s = 0;
            s -= arr[i];

            while (l < r)
            {
                if (arr[l] + arr[r] == s)
                {
                    vector<int> v(3);
                    v[0] = arr[i];
                    v[1] = arr[r--];
                    v[2] = arr[l++];
                    sort(v.begin(), v.end());
                    seet.insert(v);
                }
                else if (arr[l] + arr[r] < s)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        for (auto x : seet)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
