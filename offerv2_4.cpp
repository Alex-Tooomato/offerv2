//
// Created by skyyw on 2022/1/6.
//

#include <iostream>
#include <vector>
using namespace std;
//从右上角开始比较，因为这样可以把一行或者一列排除。若从中间进行查找，还需判断左上还是右下，不好操作。
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(&matrix== nullptr||matrix.size()==0)
            return false;
        int row=matrix.size();
        int column=matrix[0].size();
        int i=0;
        int j=column-1;
        while(i<row&&j>=0){
            if(matrix[i][j]==target)
            {
                return true;
            } else if(matrix[i][j]>target)
                j--;
            else
                i++;
        }
        return false;

    }
};