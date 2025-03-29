#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<deque>


class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        int dist[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dist[i][j] = 1e9;
            }
        }

        deque<pair<int, int>> dq;
        dq.push_back({0, 0});
        dist[0][0] = 0;

        while (not dq.empty()) {
            auto curr = dq.front();
            dq.pop_front();
            int x = curr.first;
            int y = curr.second;
            int dir = grid[x][y];

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                int edgewt = 1; // doubt  why this is done
                if (i + 1 == dir)
                    edgewt = 0; // also doubt

                if (nx < n && nx >= 0 && ny < m && ny >= 0) {
                    // next cell lies in the grid
                    if (dist[nx][ny] > dist[x][y] + edgewt) {
                        dist[nx][ny] = dist[x][y] + edgewt;
                        if (edgewt == 1) {
                            dq.push_back({nx, ny});
                        } else {
                            dq.push_front({nx, ny});
                        }
                    }
                }
            }
        }

        return dist[n - 1][m - 1];
    }
};