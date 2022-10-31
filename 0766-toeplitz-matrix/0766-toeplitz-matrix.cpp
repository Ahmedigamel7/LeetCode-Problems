class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) { 
        for(int MatrixRow=0 ; MatrixRow < matrix.size()-1; MatrixRow++)
            for(int MatrixCol = 0; MatrixCol < matrix[MatrixRow].size()-1; MatrixCol++)
                if(matrix[MatrixRow][MatrixCol] != matrix[MatrixRow+1] [MatrixCol+1])
                    return false;
        return true;
}
};