class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
       unordered_map<int,int> m;
       int count=0;
       for(int i=0;i<n;i++)
       { int b=k-arr[i];
       if(m[b])
       count+=m[b];     //it would add up the value of redundant number which all can possibly make pair
       ++m[arr[i]];
       }
       return count;
    }
};
