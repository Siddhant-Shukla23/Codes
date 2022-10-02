class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int a1=0,a2=0;
        // vector<int> ans;
        // while(a1<m && a2<n){
        //     if(nums1[a1]<nums2[a2]){
        //         ans.push_back(nums1[a1]);
        //         a1++;
        //     }
        //     else{
        //         ans.push_back(nums2[a2]);
        //         a2++;
        //     }
        // }
        // while(a2<n){
        //         ans.push_back(nums2[a2]);
        //         a2++;
        //     }
        // while(a1<m){
        //         ans.push_back(nums1[a1]);
        //         a1++;
        //     }
        // nums1=ans;
        // }
      int i = m - 1, j = n - 1, k = m + n - 1;
     while(i >= 0 and j >= 0) {
         if(nums1[i] < nums2[j]) {
             nums1[k--] = nums2[j--];
         } else {
             nums1[k--] = nums1[i--];
         }
     }
     while(j >= 0) {
         nums1[k--] = nums2[j--];
     }
    }
};