#include<stdio.h>

int BSearchBecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;		//-1�� Ž�� ���и� �ǹ��Ѵ�.
	else		//��������
		mid = (first + last) / 2;		//Ž������� �߾��� ã�´�.

	if (ar[mid] == target)	//Ž���� Ÿ���� �ε��� �� ��ȯ
		return mid;
	else if (target < ar[mid])
		return BSearchBecur(ar, first, mid - 1, target);
	else
		return BSearchBecur(ar, mid + 1, last, target);
}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearchBecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)		//-1�� Ž�� ���и� �ǹ��Ѵ�. :: 7��
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d \n", idx);

	idx = BSearchBecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d \n", idx);

	return 0;

}