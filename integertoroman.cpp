class Solution {
public:
    string intToRoman(int num) {
        vector<string> one={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        vector<int> two={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string ans;
        int i=two.size()-1;
        while(i>=0)
        {
            while(num>=two[i])
            {
                num-=two[i];
                ans+=one[i];

            }
            i--;

        }
        return ans;
    }
};
