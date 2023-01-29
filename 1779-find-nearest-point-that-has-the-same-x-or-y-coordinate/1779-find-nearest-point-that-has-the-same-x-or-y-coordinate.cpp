class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
         int res = INT_MAX, index = -1;
        for (int i = 0; i < points.size(); i++) {
            int a = points[i][0], b = points[i][1];
            if (a == x || b == y) {
                if (abs(a-x) + abs(b-y) < res) {
                    res = abs(a-x) + abs(b-y);
                    index = i;
                }
            }
        }
        return index;
    }
};