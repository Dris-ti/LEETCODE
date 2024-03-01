#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices) {
    int mn = INT16_MAX;
    int diff = 0;
    int mxP = INT16_MIN;
        for(int i = 0; i < prices.size(); i++)
        {
            mn = min(mn, prices[i]);
            diff = prices[i] - mn;
            mxP = max(mxP, diff);
        }
        return mxP;
    }


int main()
{
    vector <int> v = {7,6,4,3,1};
    cout << maxProfit(v);
}