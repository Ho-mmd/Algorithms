#include <iostream>
#include <vector>

int N;
long long B;
std::vector<std::vector<long long>> A, res;

std::vector<std::vector<long long>> multiply(std::vector<std::vector<long long>>& mat1, std::vector<std::vector<long long>>& mat2) {
		std::vector<std::vector<long long>> result(N, std::vector<long long>(N, 0));

		for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
						for (int k = 0; k < N; k++) {
								result[i][j] += (mat1[i][k] * mat2[k][j]) % 1000;
								result[i][j] %= 1000;
						}
				}
		}
    
		return result;
}

std::vector<std::vector<long long>> matrix_power(std::vector<std::vector<long long>> base, long long exp) {
		std::vector<std::vector<long long>> result(N, std::vector<long long>(N, 0));
    
		for (int i = 0; i < N; i++)
				result[i][i] = 1;  
    
		while (exp > 0) {
				if (exp % 2 == 1)
						result = multiply(result, base);
        
				base = multiply(base, base);
				exp /= 2;
		}
		
		return result;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N >> B;
		A.resize(N, std::vector<long long>(N));
		res.resize(N, std::vector<long long>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
				std::cin >> A[i][j];
        }
    }

    res = matrix_power(A, B);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
				std::cout << res[i][j] << " ";
        }
		
		std::cout << "\n";
    }

    return 0;
}

