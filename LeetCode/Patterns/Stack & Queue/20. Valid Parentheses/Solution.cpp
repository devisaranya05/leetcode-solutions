// class Solution {
// public:
//     bool isValid(string s) {
//     int i;
//     stack<char>n;
    
//     for(i=0; i<s.size(); i++){
//      if(s[0]==')' || s[0]==']' || s[0]=='}'){
//         return false;
//     }
//     else if (s[i]=='(' || s[i]=='{' || s[i]=='['){
//         n.push(s[i]);
//     }
//     else if (s[i]==')'){
//         if(n.top()=='('){
//             n.pop();
//         }
//         else{
//             return false;
//         }
//     }
//     else if (s[i]==']'){
//         if(n.top()=='['){
//             n.pop();
//         }
//         else{
//             return false;
//         }
//     }
//     else if (s[i]=='}'){
//         if(n.top()=='{'){
//             n.pop();
//         }
//         else{
//             return false;
//         }
//     }
//     else{
//         return false;
//     }
//     }
//     if(n.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
//     }
// };


class Solution {
public:
    bool isValid(string s) {
        stack<char> n;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                n.push(s[i]);
            }
            else {
                // stack empty but closing bracket found
                if (n.empty()) return false;

                if (s[i] == ')' && n.top() == '(') {
                    n.pop();
                }
                else if (s[i] == ']' && n.top() == '[') {
                    n.pop();
                }
                else if (s[i] == '}' && n.top() == '{') {
                    n.pop();
                }
                else {
                    return false;
                }
            }
        }
        return n.empty();
    }
};
