//3sum

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
        vector<int> v(3);
        int l, r;
        for (int i = 0; i < n; ++i)
        {
            l = i + 1;
            r = n - 1;
            int s = arr[i]*-1; //we have to find for all pairs with this in rest of the array 

            while (l < r)
            {
                if (arr[l] + arr[r] == s)
                {
                    v[0] = arr[i];
                    v[1] = arr[r--]; //once a one pair is found for 2 sum there can be other pair as well 
                    v[2] = arr[l++];
                    sort(v.begin(), v.end());
                    seet.insert(v); //we are making our result unique becauseif not then try it (0,0,0,0)
                }
                else if (arr[l] + arr[r] < s)
                    ++l;
                else
                    --r;
            }
        }
        copy(seet.begin(),seet.end(),back_inserter(ans)); //back_inserter is necessary to copy via copy stl
        return ans;
    }
};
