class Solution
{
public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> time;
        for (int i = 0; i < 12; i++)
        {
            bitset<4> hour(i);
            for (int j = 0; j < 60; j++)
            {
                bitset<6> minutes(j);
                if (hour.count() + minutes.count() == turnedOn)
                {
                    string h = to_string(i);
                    string m = (j < 10) ? ":0" : ":";
                    m += to_string(j);
                    time.push_back(h + m);
                }
            }
        }
        return time;
    }
};