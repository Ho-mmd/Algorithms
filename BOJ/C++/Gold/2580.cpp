#include <iostream>
#include <vector>

bool isPossible(std::vector<std::vector<int>> &v, std::pair<int, int> coor, int val) {
		for(int i = 0; i < 9; i++)
				if(v[coor.first][i] == val)
						return false;

		for(int i = 0; i < 9; i++)
				if(v[i][coor.second] == val)
						return false;

		int startX = 3 * (coor.first / 3);
		int startY = 3 * (coor.second / 3);
		for(int i = startX; i < startX + 3; i++) {
				for(int j = startY; j < startY + 3; j++) {
						if(v[i][j] == val)
								return false;
				}
		}

		return true;
}

bool sudoku(std::vector<std::vector<int>> &v, std::vector<std::pair<int, int>> spot, int cnt) {
		if(spot.size() == cnt) {
				return true;
		} else {
				for(int j = 1; j < 10; j++) {
						if(isPossible(v, spot[cnt], j)) {
								v[spot[cnt].first][spot[cnt].second] = j;
								if(sudoku(v, spot, cnt + 1))
								        return true;
								v[spot[cnt].first][spot[cnt].second] = 0;
						}
				}
				
				
				return false;
		}		
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::vector<std::vector<int>> v;
		std::vector<std::pair<int, int>> spot;
		std::vector<int> tmp;
		int n, tot = 0;

		for(int i = 0; i < 9; i++) {
				for(int j = 0; j < 9; j++) {
						std::cin >> n;
						tmp.push_back(n);

						if(n == 0) {
								spot.push_back(std::make_pair(i, j));
						}
				}
				v.push_back(tmp);
				tmp.clear();
		}
		
		if(sudoku(v, spot, 0)) {
	                for(int i = 0; i < 9; i++) {
				for(int j = 0; j < 9; j++) {
						std::cout << v[i][j] << " ";
				}
			        std::cout << "\n";
		        }     
		}
		
		return 0;
}
		
