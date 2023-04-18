class Solution {
public:
    string reverseWords(string s) {
       stack<string> anmol;
        string ans;
        string temp="";
        //traverse the whole string and when you encounter a space we push onto the stack
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(temp.size()>0)
                {
                    anmol.push(temp);
                    temp="";
                }
            }
            else{
                temp.push_back(s[i]);
            }
        }
    ans=ans+temp;
    while(!anmol.empty())
    {
     ans=ans+" "+anmol.top();
     anmol.pop();

    }
    if(ans.size()!=0 && ans[0]==' ')
    {
        ans=ans.substr(1,ans.size()-1);
    }
        return ans;
    }
};
