class Solution {
private:
    bool findNext(vector<vector<char>>& board, string& word, int i, int j, int m, int n, int x, vector<vector<bool>>& v) {
        if (x >= word.size()) return true;
        
        if (i < 0 || i >= m || j < 0 || j >= n || v[i][j] || board[i][j] != word[x]) return false;
        
        v[i][j] = true;
        bool result = findNext(board, word, i - 1, j, m, n, x + 1, v) ||
                       findNext(board, word, i + 1, j, m, n, x + 1, v) ||
                       findNext(board, word, i, j - 1, m, n, x + 1, v) ||
                       findNext(board, word, i, j + 1, m, n, x + 1, v);
        v[i][j] = false; 
        return result;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        if (word.size() > m * n)
            return false;
        
        vector<vector<bool>> v(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    if (findNext(board, word, i, j, m, n, 0, v))
                        return true;
                }
            }
        }
        return false;
    }
};
