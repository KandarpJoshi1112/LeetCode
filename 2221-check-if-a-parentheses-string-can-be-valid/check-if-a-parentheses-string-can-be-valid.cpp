class Solution {
public:
    bool canBeValid(string s, string locked) {
        stack<int> stack_locked;
        stack<int> stack_unlocked;
        if(s.size()%2!=0)
        {
            return false;
        }

    for(int i=0;i<s.size();i++)
    {
        if(locked[i]=='0')
            stack_unlocked.push(i);
        else if(s[i]=='(')
            stack_locked.push(i);
        else
        {
            if(stack_locked.empty()==false)
                stack_locked.pop();
            else if(stack_unlocked.empty()==false)
                stack_unlocked.pop();
            else
                return false;  
        }
    }

    while(stack_locked.empty()==false && stack_unlocked.empty()==false && stack_locked.top()<stack_unlocked.top())
    {
        stack_locked.pop();
        stack_unlocked.pop();
    }
    if(stack_locked.empty()==false)
        return false;

    return true;

    }
};