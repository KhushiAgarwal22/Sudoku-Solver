#include <iostream>
using namespace std;
vector<vector<int>> inputGrid()
{
    int n = 9;
    vector<vector<int>> grid;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            //cout << "grid[" << i << "][" << j << "]:";
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        grid.push_back(tmp);
    }
    return grid;
}