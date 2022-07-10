// product of array exept self
// created by @AM

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
