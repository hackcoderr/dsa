class Solution
{
public:
    int value(char ch)
    {
        if (ch == 'M')
        {
            return 1000;
        }
        else if (ch == 'D')
            return 500;
        else if (ch == 'C')
            return 100;
        else if (ch == 'L')
            return 50;
        else if (ch == 'X')
            return 10;
        else if (ch == 'V')
            return 5;

        return 1;
    }
    int romanToInt(string s)
    {
        int ans = 0;
        int i = 0;
        while (i < s.length())
        {
            if (i + 1 < s.length() && value(s[i]) < value(s[i + 1]))
            {
                ans += value(s[i + 1]) - value(s[i]);
                i = i + 2;
            }
            else
            {
                ans += value(s[i]);
                i++;
            }
        }
        return ans;
    }
};