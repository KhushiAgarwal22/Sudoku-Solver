#include<iostream>
using namespace std;
void print_grid(vector<vector<int>> grid)
{
    for (int i = 0; i < 9; i++)
    {

        if (i % 3 == 0)
        {
            std::cout << "---------------------------\n";
        }
        for (int j = 0; j < 9; j++)
        {
            if (j == 0)
            {
                cout << "| ";
            }
            if ((j != 0 && j % 3 == 0))
            {
                cout << "|| " << grid[i][j] << " ";
            }
            else
                cout << grid[i][j] << " ";
            if (j == 8)
            {
                cout << "|";
            }
        }
        cout << endl;
    }
    cout << "---------------------------\n";
}