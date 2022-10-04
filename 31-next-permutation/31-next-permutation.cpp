class Solution {
    void reverse(vector<int>& nums,int i,int j){
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        int index1=-1;
        int index2=-1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                 break;
            }
        }
        if(index1==-1){
            reverse(nums,index1+1,n);
        }
        for(int i=n;i>=0;i--){
            if(index1==-1) break;
            if(nums[i]>nums[index1]){
                swap(nums[index1],nums[i]);
                break;
            }
        }
        if(index1!=-1)
        reverse(nums,index1+1,n);
    }
};