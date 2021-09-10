class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        if(s.length() == 0 || (s[0] == ')' || s[0] == '}' || s[0] == ']')
                || s.length()%2 == 1)
            return false;

        char c_temp;
        for(unsigned int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')  
            {
                if(stack.empty())
                    return false;
                c_temp = stack.top();
                if((s[i] == ')' && c_temp == '(') 
                  || (s[i] == '}' && c_temp == '{')
                  || (s[i] == ']' && c_temp == '['))
                    stack.pop();
                else
                    return false;
            }
        }
        if(stack.empty())
            return true;
        
        return false;
    }
};
