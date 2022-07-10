class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        set<vector<int>> seeting;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            int l, r;
            l = i + 1;
            r = n - 1;
            int s = nums[i] * -1;

            while (l < r)
            {
                if (nums[l] + nums[r] == s)
                {
                    vector<int> v(3);
                    v[0] = nums[i];
                    v[1] = nums[r];
                    v[2] = nums[l];
                    sort(v.begin(), v.end());
                    seeting.insert(v);
                    l++;
                    r--;
                }
                else if (nums[l] + nums[r] < s)
                    l++;
                else
                    r--;
            }
        }
        copy(seeting.begin(), seeting.end(), back_inserter(ans));
        return ans;
    }
};
