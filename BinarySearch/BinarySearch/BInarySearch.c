#include <stdio.h>

int BSearch(int ar[], int len, int target)		//이진탐색 알고리즘 적용된 함수
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;	//탐색 대상의 중앙을 찾는다.
		
		if (target == ar[mid]) {	//중앙에 저장된 것이 타겟이라면
			return mid;				//탐색 완료!
		}
		else						// 타겟이 아니라면 탐색 대상을 반으로 줄인다.
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;		//찾지 못했을 때 반환하는 값 -1
}

int main(void) {
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타켓 저장 인덱스 : %d \n", idx);


	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타켓 저장 인덱스 : %d \n", idx);

	return 0;

}