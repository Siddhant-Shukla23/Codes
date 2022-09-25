class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>1)
                result.push_back(i.first);
        }
        return result;
    }
};