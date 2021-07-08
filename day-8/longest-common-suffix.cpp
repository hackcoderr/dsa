#include <bits/stdc++.h>
using namespace std;
string lcs(vector<string> &strs)
{
    int x;
    string result = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        x = 0;
        while (x < result.size() && x < strs[i].size() && result.at(x) == strs[i].at(x))
            x++;
        result = result.substr(0, x);
    }
    return result;
}
int main()
{
    vector<string> strs;
    string s, result;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> s;
        reverse(s.begin(), s.end());
        strs.push_back(s);
    }
    result = lcs(strs);
    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}