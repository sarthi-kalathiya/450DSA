//actual ans
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& ar) {
        
        int n = ar.size();
        int left[n];
        int right[n];
        int product = 1;
        left[0] = 1;
        for(int i=1;i<n;i++) {
            product = product*ar[i-1];
            left[i] = product;
        }
        right[n-1] = 1;
        product = 1;
        for(int i=n-2;i>=0;i--) {
            product = product*ar[i+1];
            right[i] = product;
        }
        vector<int> v;
        for(int i=0;i<n;i++) {
            v.push_back(right[i]*left[i]);
        }
        return v;
        
    }
};


// product of array exept self
// created by @AM
class Solution
{
public:
       vector<int> productExceptSelf(vector<int> &nums)
       {
              int n = nums.size();
              vector<int> v(nums.size(), 0);
              int ans;
              int c = count(nums.begin(), nums.end(), 0);
              if (c > 1)
              {
                     return v;
              }
              else if (c == 1)
              {
                     for (int i = 0; i < n; ++i)
                     {
                            if (nums[i] == 0)
                            {
                                   nums[i] = 1;
                                   ans = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
                                   v[i] = ans;
                                   return v;
                            }
                     }
              }
              else
              {
                     ans = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
                     for (int i = 0; i < nums.size(); ++i)
                     {
                            v[i] = ans / nums[i];
                     }
                     return v;
              }
           return v;
       }
};
