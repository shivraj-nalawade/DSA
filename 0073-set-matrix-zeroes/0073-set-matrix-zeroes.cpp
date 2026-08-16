class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();       // number of rows
        int m = mat[0].size();    // number of columns
        vector<bool> rows(n, false), cols(m, false);

    // Traverse the matrix to fill rows[] and cols[]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // If the cell contains zero then mark
            // its row and column as zero
            if (mat[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Mark cell (i, j) with zero if either
            // of rows[i] or cols[j] is true
            if (rows[i] || cols[j])
                mat[i][j] = 0;
        }
    }
    }
};