class Solution {
private:
    void solve(vector<int>& nums,vector<vector<int>> &ans, vector<int> &ds,int target, int index){
        if(index==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            solve(nums, ans, ds,target-nums[index], index);
            ds.pop_back();
        }
        solve(nums, ans, ds,target, index+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index=0;
        //sort(nums.begin(),nums.end());
        solve(nums, ans, ds,target, index);
        return ans;
    }
};