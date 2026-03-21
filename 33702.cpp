#include <iostream>
#include <vector>
using namespace std;

int dx[] = { -1, 1, 0, 0 }; // 상하좌우
int dy[] = { 0, 0, -1, 1 };
bool visited[3][3];
int answer = 0;


pair<int, int> getPosition(int k) {
    int row = (k - 1) / 3;
    int col = (k - 1) % 3;
    return { row, col };
}

void dfs(int x, int y, int depth) {
    if (depth == 9) {
        answer++;
        return;
    }

    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= 3 || ny < 0 || ny >= 3) continue;
        if (visited[nx][ny]) continue;

        visited[nx][ny] = true;
        dfs(nx, ny, depth + 1);
        visited[nx][ny] = false;
    }
}

int main() {
    int K;
    cin >> K;

    pair<int, int> start = getPosition(K);
    visited[start.first][start.second] = true;
    dfs(start.first, start.second, 1);

    cout << answer << '\n';
    return 0;
}
