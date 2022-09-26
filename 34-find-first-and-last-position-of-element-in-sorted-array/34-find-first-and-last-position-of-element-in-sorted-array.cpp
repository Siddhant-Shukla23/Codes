class Solution {
public: 
    int firstOccurrence(vector<int>& nums,int target){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int answer=-1;
        while(start<=end){
            if(nums[mid]==target){
                answer=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return answer;
    }
public: 
    int lastOccurrence(vector<int>& nums,int target){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int answer=-1;
        while(start<=end){
            if(nums[mid]==target){
                answer=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return answer;
    }    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first= firstOccurrence(nums,target);
        int last= lastOccurrence(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};