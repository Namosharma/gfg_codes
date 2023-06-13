class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        //sort(arr.begin(),arr.end());
         vector<int> v;
        if(s==0){
            v.push_back(-1);
            return v;
        }
        int left=0;
        int right=0;
        long long int sum=arr[0];
        while(right<n){
            while(left<=right && sum>s){
                 if(sum==s){
                    break;
                }
                sum=sum-arr[left];
                left++;
               
            }
            if(sum==s){
                break;
            }
            if(right<n){
                right++;
            sum=sum+arr[right];
            }
            
        }
        if(sum==s){
            v.push_back(left+1);
            v.push_back(right+1);
            
        }
        else{
            v.push_back(-1);
        }
        return v;
        
    }
};