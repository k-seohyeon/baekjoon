#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> ch(n, vector<int>(m, -1));

    int x, y;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j]==2){
                x = i;
                y = j;
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({x, y});
    ch[x][y] = 0;

    while(!q.empty()){
        auto cur = q.front();
        q.pop();

        int cur_x = cur.first;
        int cur_y = cur.second;

        for(int d = 0; d < 4; d++){
            int nx = cur_x + dx[d];
            int ny = cur_y + dy[d];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(a[nx][ny]==0) continue;
            if(ch[nx][ny] != -1) continue;

            ch[nx][ny] = ch[cur_x][cur_y] + 1;
            q.push({nx, ny});
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 0) cout << 0 << " ";
            else cout << ch[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}