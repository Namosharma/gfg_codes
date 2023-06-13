//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> v;
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(k>0){
	        v.push_back(arr[j]);
	        j--;
	        k--;
	    }
	    return v;
	}

};