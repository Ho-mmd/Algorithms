#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m, cmp;

	scanf("%d", &n);

	int *arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	scanf("%d", &m);

	int* tmp = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &cmp);
		for (int j = 0; j < n; j++) {
			if (arr[j] == cmp) {
				tmp[i] = 1;
				break;
			}
			else
				tmp[i] = 0;
		}
	}
		
	for (int i = 0; i < m; i++)
		printf("%d ", tmp[i]);

	free(arr);
	free(tmp);

	return 0;
}

//https://www.acmicpc.net/problem/4673
void BOJ4673() {
	int sum, a = 1, aa, b, arr[10001], i;

	while (1) {
		sum = 0;
		b = 1;
		sum += a;
		aa = a;
		while (aa != 0) {
			b = aa % 10;
			sum += b;
			aa /= 10;
		}

		if (sum <= 10000)
			arr[sum] = 1;

		a++;

		if (a > 10000)
			break;
	}

	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}

//https://www.acmicpc.net/problem/1978
void BOJ1978() {
	int n, a, count = 0, flag;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		flag = 0;
		for (int j = 2; j <= a; j++) {
			if (a % j == 0)
				flag++;
		}
		if (flag == 1)
			count++;
	}

	printf("%d", count);

	return 0;
}

//https://www.acmicpc.net/problem/1316
#include <string.h>
void BOJ1316() {
	int n, j, k, cnt = 0, end;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		k = 0;
		end = strlen(arr);
		for (j = 0; j < end - 2; j++) {
			for (k = j + 2; k < end; k++) {
				if (arr[j] == arr[k] && arr[k] != arr[k - 1])
					break;
			}

			if (arr[j] == arr[k] && arr[k] != arr[k - 1])
				break;
		}
		if (k == end || k == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}

//https://www.acmicpc.net/problem/2941
#include <string.h>
void BOJ2941() {
	char arr[101];
	int count = 0;

	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'c' && (arr[i + 1] == '=' || arr[i + 1] == '-'))
			i++;
		else if (arr[i] == 'd') {
			if (arr[i + 1] == '-')
				i++;
			else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
				i += 2;
		}
		else if ((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j')
			i++;
		else if ((arr[i] == 's' || arr[i] == 'z') && arr[i + 1] == '=')
			i++;
		count++;
	}

	printf("%d", count);

	return 0;
}

//https://www.acmicpc.net/problem/2751
#include <stdlib.h>
void merge(int arr[], int start, int mid, int end) {
	int b[1000001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			b[k] = arr[i];
			k++;
			i++;
		}
		else {
			b[k] = arr[j];
			j++;
			k++;
		}
	}

	while (i <= mid) {
		b[k] = arr[i];
		i++;
		k++;
	}

	while (j <= end) {
		b[k] = arr[j];
		j++;
		k++;
	}

	k--;

	while (k >= 0) {
		arr[start + k] = b[k];
		k--;
	}
}
void mergeSort(int arr[], int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);

		merge(arr, start, mid, end);
	}
	else
		return;
}
void BOJ2751() {
	int n, i;

	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}

//https://www.acmicpc.net/problem/2869
void BOJ2869() {
	int A, B, V, day;

	scanf("%d%d%d", &A, &B, &V);

	if (V <= A)
		day = 1;
	else if (V - (A - B) < A)
		day = 2;
	else {
		if ((V - A) % (A - B) == 0)
			day = (V - A) / (A - B) + 1;
		else
			day = (V - A) / (A - B) + 2;
	}

	printf("%d", day);

	return 0;
}

//https://www.acmicpc.net/problem/7568
void BOJ7568() {
	int n, i, j, cnt;

	scanf("%d", &n);

	int* he = malloc(sizeof(int) * n);
	int* we = malloc(sizeof(int) * n);
	int* con = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &he[i]);
		scanf("%d", &we[i]);
		con[i] = 0;
	}

	for (i = 0; i < n; i++) {
		cnt = 1;

		for (j = 0; j < n; j++) {
			if (he[i] < he[j]) {
				if (we[i] < we[j])
					cnt++;
			}
		}

		con[i] = cnt;
	}

	for (i = 0; i < n; i++)
		printf("%d ", con[i]);

	free(he);
	free(we);
	free(con);

	return 0;
}

//https://www.acmicpc.net/problem/1181
#include <stdlib.h>
#include <string.h>
typedef struct {
	char string[51];
	int length;
} str;
str sort[20001];
void merge0(str* arr, int first, int mid, int last) {
	int i = first;
	int j = mid + 1;
	int k = first;

	while (i <= mid && j <= last) {
		if (arr[i].length < arr[j].length) {
			sort[k++] = arr[i++];
		}
		else if (arr[i].length > arr[j].length) {
			sort[k++] = arr[j++];
		}
		else {
			if (strcmp(arr[i].string, arr[j].string) < 0) {
				sort[k++] = arr[i++];
			}
			else {
				sort[k++] = arr[j++];
			}
		}
	}

	if (i > mid) {
		while (j <= last)
			sort[k++] = arr[j++];
	}
	else {
		while (i <= mid)
			sort[k++] = arr[i++];
	}

	for (k = first; k <= last; k++)
		arr[k] = sort[k];
}
void mergesort0(str* arr, int first, int last) {
	int mid;

	if (first < last) {
		mid = (first + last) / 2;
		mergesort0(arr, first, mid);
		mergesort0(arr, mid + 1, last);
		merge0(arr, first, mid, last);
	}
}
void BOJ1181() {
	int N;
	scanf("%d", &N);
	str* arr = malloc(sizeof(str) * N);

	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i].string);
		arr[i].length = strlen(arr[i].string);
	}

	mergesort0(arr, 0, N - 1);

	printf("%s\n", arr[0].string);
	for (int i = 1; i < N; i++) {
		if (strcmp(arr[i - 1].string, arr[i].string) != 0)
			printf("%s\n", arr[i].string);
	}
	return 0;
}

//https://www.acmicpc.net/problem/2581
void BOJ2581() {
	int n, i, a, b, flag = 1, sum = 0, min;

	scanf("%d%d", &a, &b);

	for (n = a; n <= b; n++) {
		for (i = 2; i < n; i++) {
			if (n % i == 0)
				break;

		}
		if (i == n) {
			sum += n;
			if (flag == 1) {
				min = n;
				flag = 0;
			}
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}

//https://www.acmicpc.net/problem/1427
#include <string.h>
void BOJ1427() {
	char arr[11];
	int cnt[10] = { 0 };

	scanf("%s", arr);

	for (int i = 0; i <= strlen(arr); i++)
		cnt[(int)arr[i] - 48]++;

	for (int j = 9; j >= 0; j--) {
		while (cnt[j] != 0) {
			printf("%d", j);
			cnt[j]--;
		}
	}

	return 0;
}

//https://www.acmicpc.net/problem/11650
#include <stdlib.h>
typedef struct {
	int x;
	int y;
}Pos;
void merge1(Pos arr[], int start, int mid, int end) {
	Pos tmp[100001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i].x < arr[j].x) {
			tmp[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].x == arr[j].x) {
			if (arr[i].y > arr[j].y) {
				tmp[k] = arr[j];
				k++;
				j++;
			}
			else {
				tmp[k] = arr[i];
				k++;
				i++;
			}
		}
		else {
			tmp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		tmp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= end) {
		tmp[k] = arr[j];
		k++;
		j++;
	}

	while (k > 0) {
		arr[start + k - 1] = tmp[k - 1];
		k--;
	}
}
void mergesort1(Pos arr[], int start, int end) {
	int mid;

	if (start < end) {
		mid = (start + end) / 2;

		mergesort1(arr, start, mid);
		mergesort1(arr, mid + 1, end);
		merge1(arr, start, mid, end);
	}
	else
		return;

}
void BOJ11650() {
	int n;

	scanf("%d", &n);

	Pos* arr = (Pos*)malloc(sizeof(Pos) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	mergesort1(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);

	free(arr);

	return 0;
}

//https://www.acmicpc.net/problem/10814
#include <stdlib.h>
typedef struct {
	char name[101];
	int age;
	int sqe;
}Person;
void Quicksort(Person arr[], int start, int end) {
	int index;

	if (start < end) {
		index = Partition(arr, start, end);
		Quicksort(arr, start, index - 1);
		Quicksort(arr, index + 1, end);
	}
	else
		return;
}
int Partition(Person arr[], int start, int end) {
	Person pivot = arr[end];
	int index = start, i;
	Person tmp;

	for (i = start; i < end; i++) {
		if (arr[i].age < pivot.age) {
			tmp = arr[i];
			arr[i] = arr[index];
			arr[index] = tmp;
			index++;
		}
		else if (arr[i].age == pivot.age) {
			if (arr[i].sqe < pivot.sqe) {
				tmp = arr[i];
				arr[i] = arr[index];
				arr[index] = tmp;
				index++;
			}
		}
	}

	tmp = arr[index];
	arr[index] = arr[end];
	arr[end] = tmp;

	return index;
}
void BOJ10814() {
	int n;

	scanf("%d", &n);

	Person* arr = (Person*)malloc(sizeof(Person) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &arr[i].age, &arr[i].name);
		arr[i].sqe = i;
	}

	Quicksort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);

	free(arr);

	return 0;
}

//https://www.acmicpc.net/problem/1436
#include <string.h>
void BOJ1436() {
	int n, i = 666, cnt = 0;
	char cmp[4] = "666";
	char tmp[101];

	scanf("%d", &n);

	while (1) {
		if (cnt == n)
			break;

		sprintf(tmp, "%d", i);

		if (strstr(tmp, cmp) != NULL) {
			cnt++;
		}

		i++;
	}

	i--;

	printf("%d", i);

	return 0;
}

//https://www.acmicpc.net/problem/11651
#include <stdlib.h>
typedef struct {
	int x, y;
}Pos1;
void merge2(Pos1 arr[], int start, int mid, int end) {
	Pos1 tmp, sav[100001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i].y < arr[j].y) {
			sav[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].y == arr[j].y) {
			if (arr[i].x < arr[i].x) {
				sav[k] = arr[i];
				k++;
				i++;
			}
			else {
				sav[k] = arr[j];
				k++;
				j++;
			}
		}
		else {
			sav[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		sav[k] = arr[i];
		k++;
		i++;
	}

	while (j <= end) {
		sav[k] = arr[j];
		k++;
		j++;
	}

	while (k > 0) {
		arr[start + k - 1] = sav[k - 1];
		k--;
	}

}
void mergesort2(Pos1 arr[], int start, int end) {
	int mid;

	if (start < end) {
		mid = (start + end) / 2;

		mergesort2(arr, start, mid);
		mergesort2(arr, mid + 1, end);

		merge2(arr, start, mid, end);
	}
	else
		return;
}
void BOJ11651() {
	int n;

	scanf("%d", &n);

	Pos1* arr = (Pos1*)malloc(sizeof(Pos1) * n);

	for (int i = 0; i < n; i++)
		scanf("%d%d", &arr[i].x, &arr[i].y);

	mergesort2(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);

	free(arr);

	return 0;
}

//https://www.acmicpc.net/problem/1010
void BOJ1010() {
	int n, x, y;
	int con;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		con = 1;
		scanf("%d%d", &x, &y);
		for (int j = 0; j < x; j++) {
			con *= y - j;
			con /= j + 1;
		}
		printf("%d\n", con);
	}

	return 0;
}

//https://www.acmicpc.net/problem/11866
void BOJ11866() {
	int a, b, t = 0, arr[1001] = { 0 };

	scanf("%d%d", &a, &b);

	printf("<");

	for (int j = 1; j < a + 1; j++) {
		for (int k = 0; k < b; k++) {
			t++;
			if (t > a)
				t = 1;
			while (arr[t] == 1) {
				t++;
				if (t > a)
					t = 1;
			}
		}
		if (j == a)
			printf("%d", t);
		else
			printf("%d, ", t);
		arr[t] = 1;
	}

	printf(">");

	return 0;
}

//https://www.acmicpc.net/problem/1676
void BOJ1676() {
	int n;

	scanf("%d", &n);

	printf("%d", n / 5 + n / 25 + n / 125);

	return 0;
}

