#include <bits/stdc++.h>
using namespace std;
#include "print_grid.h"
#include "input.h"
bool isSafe(vector<vector<int>> &grid,int i,int j,int num)
{
       for(int k=0;k<9;k++)
       {
            if(grid[i][k]==num)
            return false;
       }
       for(int k=0;k<9;k++)
       {
            if(grid[k][j]==num)
            return false;
       }
       int stro=i-i%3;
       int stcol=j-j%3;
       for(int k=0;k<3;k++)
       {
          for(int l=0;l<3;l++)
          {
              if(grid[stro+k][stcol+l]==num)
              return false;
          }
       }
       return true;
}
bool findEmptyPlace(vector<vector<int>> &grid,int &i,int &j)
{
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(grid[i][j]==0)
            {
                return true;
            }
        }
    }
    return false;
}
bool FillGrid(vector<vector<int>> &grid)
{
    int row,col;
    //cout<<"1";
    if(!findEmptyPlace(grid,row,col))
    {
        return true;
    }
    for(int num=1;num<=9;num++)
    {
        //cout<<"2";
        if(isSafe(grid,row,col,num))
        {
            //cout<<"3";
            grid[row][col]=num;
            if(FillGrid(grid))
            {
                //cout<<"4";
                return true;
            }
            grid[row][col]=0;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> grid= inputGrid();
    cout<<"Input Grid: \n";
    print_grid(grid);
    if(FillGrid(grid))
    {
        cout<<"Filled grid: \n";
        print_grid(grid);
    }
    else cout<< "Invalid grid";
    return 0;
}
    // 3 0 6 5 0 8 4 0 0
    // 5 2 0 0 0 0 0 0 0
    // 0 8 7 0 0 0 0 3 1
    // 0 0 3 0 1 0 0 8 0
    // 9 0 0 8 6 3 0 0 5
    // 0 5 0 0 9 0 6 0 0
    // 1 3 0 0 0 0 2 5 0
    // 0 0 0 0 0 0 0 7 4
    // 0 0 5 2 0 6 3 0 0