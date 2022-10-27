//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
   void solve(vector<int>& nums,vector<int> &ans, int sum, int index, int size){
        if(index>=size){
            ans.push_back(sum);
            return;
        }
        solve(nums, ans, sum, index+1, size);
        
        int element = nums[index];
        sum+=element;
        solve(nums, ans, sum, index+1, size);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int sum;
        int index=0;
        solve(arr, ans, sum, index, N);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends