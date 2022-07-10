//3sum

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        set<vector<int>> unique_res;
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        vector<int> v(3);
        int left, right, s;
        for (int i = 0; i < n; ++i)
        {
            left = i + 1;
            right = n - 1;
            s = nums[i] * -1;

            while (left < right)
            {
                if (nums[left] + nums[right] == s)
                {
                    v[0] = nums[i];
                    v[1] = nums[right--];
                    v[2] = nums[left++];
                    // sort(v.begin(), v.end()); //it won't make any difference in ans checker so i just remove it to make it faster
                    unique_res.insert(v);
                }
                else if (nums[left] + nums[right] < s)
                    ++left;
                else
                    --right;
            }
        }
        copy(unique_res.begin(), unique_res.end(), back_inserter(answer));
        return answer;
    }
};
