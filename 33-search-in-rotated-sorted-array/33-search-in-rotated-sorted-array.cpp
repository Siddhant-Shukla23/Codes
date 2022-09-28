class Solution {
public:
    int getPivot(vector<int>& nums, int n){
        int s=0;
        int e=n-1;
        
        int mid=s+(e-s)/2;
        
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    int binarySearch(vector<int>& nums,int s,int e,int k){
        int start=s;
        int end=e-1;
        int target=k;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot= getPivot(nums,n);
        if(target>=nums[pivot] && target<=nums[n-1]){
            return binarySearch(nums,pivot,n,target);
        }
        else{
            return binarySearch(nums,0,pivot,target);
        }
    }
};