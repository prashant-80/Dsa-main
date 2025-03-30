//application of BFS
//appraoch is to start from the given cell and mark it as visited
//then we will check all the 4 directions and if the cell is not visited and has the same color as the original color
//then we will mark it as visited and push it to the queue
//finally we will return the image
// Time complexity: O(n*m)
// Space complexity: O(n*m)

class Solution {
    public:
        vector<vector<int>> direction = {{-1,0}, {0,-1}, {1,0}, {0,1}};
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int oc = image[sr][sc];  
            if(oc == color) return image;  //if the color is same as original color then return the image
    
            queue<pair<int,int>>qu;
            qu.push({sr, sc});
            image[sr][sc] = color;  //marking as visited original color
    
            //lets start the bfs
            while(!qu.empty()){
                auto [r,c] = qu.front();
                qu.pop();
    
                for(auto dir:direction){
                    int nx = r+dir[0];
                    int ny  = c+dir[1];
                    if(nx>=0 && nx<image.size() && ny >=0 && ny<image[0].size() && image[nx][ny] == oc){
                        image[nx][ny] = color;
                        qu.push({nx,ny});
                    }        
    
                }
    
            }
            return image;
    
        }
    };