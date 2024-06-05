#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, K, W, V;
    int dp[101][100001] = {0, };
    std::vector<std::pair<int, int>> v;

    std::cin >> N >> K;

    for (int i = 0; i < N; i++) {
        std::cin >> W >> V;
        v.push_back(std::make_pair(W, V));
    }


    for (int i = 1; i <= N; i++) {    
        for (int j = 1; j <= K; j++) {
            if (v[i - 1].first <= j)
                dp[i][j] = std::max(dp[i - 1][j], v[i - 1].second + dp[i - 1][j - v[i - 1].first]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    std::cout << dp[N][K];

    return 0;
}

