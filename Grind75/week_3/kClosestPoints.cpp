// Approach:
// Use a max heap to keep track of the K closest points
// Time Complexity: O(n log k) where n is the number of points
// Space Complexity: O(k) for the heap

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Max heap to store the k closest points
        priority_queue<pair<int, int>> pq;
        
        // Add first k points to the heap
        for (int i = 0; i < k; i++) {
            int distSquared = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({distSquared, i});
        }
        
        // For remaining points, if closer than the farthest in heap, replace
        for (int i = k; i < points.size(); i++) {
            int distSquared = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            
            if (distSquared < pq.top().first) {
                pq.pop();
                pq.push({distSquared, i});
            }
        }
        
        // Collect results
        vector<vector<int>> result;
        while (!pq.empty()) {
            result.push_back(points[pq.top().second]);
            pq.pop();
        }
        
        return result;
    }
};
