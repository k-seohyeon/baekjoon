#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    int n, m;
    cin >> n >> m;
    int cnt = 0, max_area = 0;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j]==1 && !b[i][j]){
                cnt++;
                int area = 1;
                b[i][j]=1;
                queue<pair<int, int>> q;
                q.push({i, j});
                while(!q.empty()){
                    auto [x, y] = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int nx = x + dx[d];
                        int ny = y + dy[d];
                        if(nx >= 0 && nx <n && ny >=0 && ny < m){
                            if(a[nx][ny] == 1 && !b[nx][ny]){
                                b[nx][ny] = 1;
                                area++;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
                if(area > max_area) max_area = area;
            }
        }
    }

    cout << cnt << '\n' << max_area << '\n';

    

    return 0;
}