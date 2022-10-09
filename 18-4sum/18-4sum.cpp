class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                //long long target2=target-nums[i]-nums[j];
                long long int target2 = 1LL*target - 1LL*nums[ i ]  -  1LL*nums[ j ];
                int front = j+1;
                int back=n-1;
                while(front<back){
                    int sum=nums[front]+nums[back];
                    if(sum>target2) back--;
                    else if(sum<target2)front++;
                    else {
                        vector<int> ans(4,0);
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[front];
                        ans[3]=nums[back];
                        res.push_back(ans);
                        while(front<back && nums[front]==ans[2]) front++;
                        while(front<back && nums[back]==ans[3]) back--;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return res;
    }
};