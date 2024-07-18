class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<int> result;
        int d[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int row = 0, col = 0, dir = 0;
        
        for(int i = 0; i < m * n; i++) {
            result.push_back(matrix[row][col]);
            visited[row][col] = true;
            int nextRow = row + d[dir][0];
            int nextCol = col + d[dir][1];
            if (nextRow >= 0 && nextRow < m && nextCol >= 0 && nextCol < n && !visited[nextRow][nextCol]) {
                row = nextRow;
                col = nextCol;
            }
            else {
                dir = (dir + 1) % 4;
                row += d[dir][0];
                col += d[dir][1];
            }
        }
        return result;
    }
};
