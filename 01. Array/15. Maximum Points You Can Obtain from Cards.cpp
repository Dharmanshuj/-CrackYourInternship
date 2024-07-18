class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = k, right = cardPoints.size();
        int sum = 0;
        for(int i=0; i<left; i++)
            sum += cardPoints[i];
        int result = sum;
        while(left >= 0) {
            if(right != cardPoints.size()) {
                sum -= cardPoints[left];
                sum += cardPoints[right];
            }
            result = max(result, sum);
            left--;
            right--;
        }
        return result;
    }
};
