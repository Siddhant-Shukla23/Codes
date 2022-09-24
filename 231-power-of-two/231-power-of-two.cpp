class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        int val=1;
        int num=1;
        while(num<31){
            if((2*val)==n) return true;
            else val=val*2;
            num++;
        }
        return false;
    }
};