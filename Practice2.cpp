/*
10 * 10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

�Է� ��
3 4 
4 2 6 3
7 9 3 4
5 1 2 1

��� ��
15
23
9 
*/
#include <stdio.h>
int main() {
	int n, m;
	int arr[12][12];
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}