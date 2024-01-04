//https://www.acmicpc.net/problem/5575
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int time[3][6];
	int h, m, s;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &time[i][j]);
		}
	}

	for (int k = 0; k < 3; k++) {
		if (time[k][5] - time[k][2] >= 0)
			s = time[k][5] - time[k][2];
		else {
			if (time[k][4] == 0) {
				time[k][3] -= 1;
				time[k][4] += 59;
				time[k][5] += 60;
				s = time[k][5] - time[k][2];
			}
			else {
				time[k][4] -= 1;
				time[k][5] += 60;
				s = time[k][5] - time[k][2];
			}
		}
		if (time[k][4] - time[k][1] >= 0)
			m = time[k][4] - time[k][1];
		else {
			time[k][3] -= 1;
			time[k][4] += 60;
			m = time[k][4] - time[k][1];
		}
		h = time[k][3] - time[k][0];
		printf("%d %d %d\n", h, m, s);
	}
	return 0;
}