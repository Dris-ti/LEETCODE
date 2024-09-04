#include <iostream>
#include <map>
#include <vector>
using namespace std;

int romanToInt(string s)
{
    map<char, int> m;
    int res = 0;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int currVal = 0, nextVal = 0;

    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        char nextC = s[i+1];

        if(m[c] < m[nextC])
        {
            res += abs(m[c] - m[nextC]);
            i++;
        }
        else
        {
            res += m[c];
        }
    }

    return res;  
}

int main()
{
    string s = "MCMXCIV";

    cout << romanToInt(s);
}