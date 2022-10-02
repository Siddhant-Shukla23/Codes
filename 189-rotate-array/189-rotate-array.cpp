class Solution {
public:
    void reverse(vector<int>& nums, int i,int j){
        while(i<j){
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
        // vector<int> ans(n);
        // for(int i=0;i<n;i++){
        //     int h=(i+k)%n;
        //     ans[h]=nums[i];
        // }
        // nums=ans;
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};