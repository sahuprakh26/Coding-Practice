/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1)Open brackets must be closed by the same type of brackets.
2)Open brackets must be closed in the correct order.
*/
class Solution {
public:    
    bool ismatch(char ob, char cb)
    {
        if(ob=='[' && cb==']')
            return true;
        if(ob=='{' && cb=='}')
            return true;
        if(ob=='(' && cb==')')
            return true;
        return false;
    }
public:
    bool isValid(string exp) {
        stack <char>s;
        
     for(int i=0;i<exp.length();i++)
     {
       if(exp[i]=='['||exp[i]=='{'||exp[i]=='('){
           s.push(exp[i]);
       }
         else
         { if(s.empty())
                return false;
          
         else if(!ismatch(s.top(),exp[i]))
            return false;
          
         s.pop();
         }
     } 
        if(s.empty())
            return true;
        return false;
        
 }};
