#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string strs[3] = {"flower", "flow", "flight"};
    int size = sizeof(strs) / sizeof(*strs);
    if (size == 0)
    {
        cout << "LCP:"
             << "" << endl;
    }
    else if (size == 1)
    {
        cout << "LCP:" << strs[0] << endl;
    }
    else
    {
        std::sort(strs, strs + size);
        int length = strs[0].size();
        string result = "";

        for (int i = 0; i < length; i++)
        {
            if (strs[0][i] == strs[size - 1][i])
            {
                result += strs[0][i];
            }
            else
            {
                break;
            }
        }
        cout << "LCP: " << result << endl;
    }
    return 0;
}