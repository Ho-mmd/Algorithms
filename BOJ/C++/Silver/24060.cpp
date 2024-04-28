#include <iostream>

int cnt = 0;
int K;
int ans;
int tmp[500001] = { 0 };

void merge(int A[], int p, int q, int r) {
		int i = p; 
		int j = q + 1; 
		int t = 1;

		while (i <= q and j <= r) {
				if (A[i] <= A[j])
						tmp[t++] = A[i++];
				else 
						tmp[t++] = A[j++];
				cnt++;

				if(cnt == K)
						ans = tmp[t - 1];
		}

		while (i <= q) { 
				tmp[t++] = A[i++];
				cnt++;
				
				if(cnt == K)
						ans = tmp[t - 1];
		}
		while (j <= r) {  
				tmp[t++] = A[j++];
				cnt++;
				
				if(cnt == K)
						ans = tmp[t - 1];
		}
			
		i = p; 
		t = 1;

		while (i <= r)  
				A[i++] = tmp[t++];
}

void merge_sort(int A[], int p, int r) { 
		int q;

		if (p < r) {
				q = (p + r) / 2;       
				merge_sort(A, p, q);      
				merge_sort(A, q + 1, r);  
				merge(A, p, q, r);  
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int A[500001];
		int N, num;

		std::cin >> N >> K;

		for(int i = 0; i < N; i++) {
				std::cin >> num;
				A[i] = num;
		}
		
		merge_sort(A, 0, N - 1);

		if(cnt < K)
				std::cout << -1;
		else
				std::cout << ans;

		return 0;
}
