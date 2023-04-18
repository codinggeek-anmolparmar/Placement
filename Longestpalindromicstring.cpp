class Solution {
public:
    int solution(string anmol,int a,int b)
    {
        while(a>=0 && b<anmol.size() && anmol[a]==anmol[b])
        {
            a--;
            b++;
        }
        return b-a-1;
    }
    string longestPalindrome(string s) {
        //expand from center approach
        if(s.size()==1)
        {
            return s;
        }
        int start=0;
        int end=0;
        for(int i=0;i<s.size();i++)
        {
            int len1=solution(s,i,i+1);
            int len2=solution(s,i,i);
            int len=max(len1,len2);
            if(end-start<len)
            {
                start=i-(len-1)/2;
                end=i+len/2;
            }

        }
        return s.substr(start,end);
    }
};
