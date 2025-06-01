class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxsum=arr[0];
        int currsum=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            
                currsum=max(arr[i],currsum+arr[i]);
                maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};