class Solution {
public:
    int reverse(int x) {
        int temp;
        int num=x;
        int reminder;
        long long int rev=0;
        while(num!=0){
        reminder=num%10;
        num=num/10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && reminder > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && reminder < -8)) return 0;
        rev=(rev*10)+reminder;
        }
        return rev;
        }
};