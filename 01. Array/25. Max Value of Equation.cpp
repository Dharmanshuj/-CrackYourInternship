class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int result = INT_MIN;
        priority_queue<pair<int, int>> pq;
        
        for (int i = 0; i < points.size(); i++) {
            while (!pq.empty() && points[i][0] - pq.top().second > k) {
                pq.pop();
            }
            if (!pq.empty()) {
                result = max(result, points[i][1] + pq.top().first + points[i][0]);
            }
            pq.push({points[i][1] - points[i][0], points[i][0]});
        }
        return result;
    }
};
