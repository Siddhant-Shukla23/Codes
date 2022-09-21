class Solution {
public:
    // int characterReverse(int start,int end, vector<char> &s){
    //     if(start>=end) return -1;
    //     swap(s[start],s[end]);
    //     characterReverse(start+1,end-1, s);
    //     return -1;
    // }
    void reverseString(vector<char>& s) {
        int end=s.size()-1;
        int start=0;
        while(start<end){
            int temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            end--;
            start++;
        }
    }
};