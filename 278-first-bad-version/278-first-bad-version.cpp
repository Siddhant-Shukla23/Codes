// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        int start=0;
        int end=n;
        while(start<=end){
            long long int mid= start+(end-start)/2;
            if(isBadVersion(mid)) end=mid-1;
            else start=mid+1;
        }
        return end+1;
    }
};