class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowmarker(rows, 0);
        vector<int> colmarker(cols, 0);

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j] == 0){
                    rowmarker[i] = 1;
                    colmarker[j] = 1;
                }
            }
        }

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(rowmarker[i] == 1 || colmarker[j] ==1 ) matrix[i][j] = 0;
            }
        }
    }
};
