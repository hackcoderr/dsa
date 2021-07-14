class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans(n + 1);
        if (n >= 1)
            ans[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            ans[i] = ans[i / 2] + (i % 2 == 0 ? 0 : 1);
        }
        return ans;
    }
};