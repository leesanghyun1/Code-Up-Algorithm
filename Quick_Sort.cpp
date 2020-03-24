#include <stdio.h>
//Quick Sort
//특정한 경우에는 최악의 시간(ex 이미 정렬되있는 경우) 
//분할 정복 알고리즘 ->배열원소를 나누어서 정렬 
//특정한 기준값(pivot)
//가운데 피벗값 설정 후 왼쪽은 피벗보다 큰값 오른쪽은 피벗보다 작은값을 찾음
//왼,오값 스왑 피벗 인덱스인 가운데에 올 때 까지 진행
//피벗값 기준 좌우로 나누어진 파티션을 가지고 각자 파티션 또진행  

void swap(int *data, int start, int end){ //스왑 
	int temp = data[start];
	data[start] = data[end];
	data[end] = temp;
}

int partition(int *data, int start, int end){
	int pivot = data[(start + end)/2];
	while(start <= end){
		while(data[start] < pivot){ //왼쪽 파티션 피벗보다 작으면 계속 넘겨줌 
			start++;
		}
		while(pivot < data[end]){ // 오르쪽 파티션 피벗보다 크면 계속 넘겨줌 
			end--;
		}
		if(start <= end){
			swap(data, start, end); //오른쪽 파티션에 첫번째 인덱스 반 
			start++;
			end--;
		}
	}
	return start; //오른쪽 파티션에 첫번째 인덱스값 넘겨줌 
} 

void quickSort(int *data, int start, int end){
	int start2 = partition(data,start,end); //오른쪽 파티션에 첫번째 인덱스 
	if(start < start2 - 1){ //왼쪽 파티션 
		quickSort(data, start, start2 - 1);
	}
	if(start2 < end){ //오른쪽 파티션 
		quickSort(data, start2, end);
	}
}    

     
int main(void){ 
	int data[10] = {1,10,5,8,7,6,4,3,2,9};
	int number = 10;
	quickSort(data, 0, number-1);
	
	for(int i = 0; i < number; i++){
	printf("%d ",data[i]);	
	}
	
	return 0;
}
