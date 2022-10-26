class Solution {
private: 
   void solve(string digits,int index,vector<string> &ans,string letter, string mapping[]){
       if(index>=digits.length()){
           ans.push_back(letter);
           return;
       }
       int number = digits[index]-'0';
       string value = mapping[number];
       for(int i=0;i<value.length();i++){
           letter.push_back(value[i]);
           solve(digits, index+1, ans, letter, mapping);
           letter.pop_back();
       }
//        if(digits[index]=='2'){
//            letter.push_back('a');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//            letter.push_back('b');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//            letter.push_back('c');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//        }
      
//        if(digits[index]=='3'){
//            letter.push_back('d');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//            letter.push_back('e');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//            letter.push_back('f');
//            solve(digits,index+1, ans, letter);
//            letter.pop_back();
//        }
       // if(digits[index]==4){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
       // if(digits[index]==5){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
       // if(digits[index]==6){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
       // if(digits[index]==7){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
       // if(digits[index]==8){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
       // if(digits[index]==9){
       //     letter.push_back("a");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("b");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       //     letter.push_back("c");
       //     solve(digits,index+1, ans, letter);
       //     letter.pop_back();
       // }
   }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string letter;
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index, ans, letter,mapping);
        return ans;
    }
};