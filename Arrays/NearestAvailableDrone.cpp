class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();

        int minDist = INT_MAX;
        int ans = -1;

        for(int i = 0; i < n; i++) {

            int dist = 0;

            for(int j = 0; j < 2; j++) {
                dist += abs(drones[i][j] - target[j]);
            }

            if(dist <= drones[i][2] && dist < minDist) {
                minDist = dist;
                ans = i;
            }
        }

        return ans;
    }
};
