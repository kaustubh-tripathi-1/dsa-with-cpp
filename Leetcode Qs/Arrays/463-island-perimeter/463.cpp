#include<iostream>
#include<vector>

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        
        int perimeter = 0;
        int rowSize = grid.size();
        int columnSize = grid[0].size();
        
        for(int row = 0 ; row < rowSize ; row++)
        {
            for(int column = 0 ; column < columnSize ; column++)
            {
                if(grid[row][column])
                {
                    //- Less readable
                    /* //$ Top check for out of bounds or 0
                    if(row-1 < 0) 
                        perimeter++;
                    else if(!grid[row-1][column])
                        perimeter++;

                    //$ Bottom check for out of bounds or 0
                    if(row+1 > rowSize-1) 
                        perimeter++;
                    else if(!grid[row+1][column])
                        perimeter++;

                    //$ Left check for out of bounds or 0
                    if(column-1 < 0) 
                        perimeter++;
                    else if(!grid[row][column-1])
                        perimeter++;

                    //$ Right check for out of bounds or 0
                    if(column+1 > columnSize-1) 
                        perimeter++;
                    else if(!grid[row][column+1])
                        perimeter++; */

                    //- More readable

                    //$ Top check for out of bounds or 0
                    if(row == 0 || !grid[row-1][column])
                        perimeter++;

                    //$ Bottom check for out of bounds or 0
                    if(row == rowSize-1 || !grid[row+1][column])
                        perimeter++;

                    //$ Left check for out of bounds or 0
                    if(column == 0 || !grid[row][column-1])
                        perimeter++;

                    //$ Right check for out of bounds or 0
                    if(column == columnSize-1 || !grid[row][column+1])
                        perimeter++;

                }
            }
        }
        
        return perimeter;
    }
};

int main()
{
    Solution s;
    std::vector<std::vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

    int peri = s.islandPerimeter(grid);
    std::cout<<peri;
}