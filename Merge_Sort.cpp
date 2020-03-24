#include <stdio.h>
//merge sorts
//배열을 나눈 후 
//나중에 정렬하여 병합

void merge(int data[], int temp[], int start, int mid, int end){ //병합 
		for(int i = start; i <= end; i++){
			temp[i] = data[i];
		}
		int part1 = start;
		int part2 = mid + 1;
		int index = start;
		
		while(part1 <= mid && part2 <= end){
			if(temp[part1] <= temp[part2]){
				data[index] = temp[part1];
				part1++;
			}else{
				data[index] = temp[part2];
				part2++;
			}
			index++;
		}
		for(int i = 0; i <= mid - part1; i++){ //앞쪽 배열 값이 남았을시 넣어줌 
			data[index + i] = temp [part1 + i];
		}	
}

void mergeSort(int data[], int temp[], int start, int end){ // 정렬할배열, 임시저장소,시작,끝 
	if(start < end){
		int mid = (start + end) / 2;
		mergeSort(data, temp, start, mid); //앞 배열 
		mergeSort(data, temp, mid + 1, end); //뒷 배열 
		merge(data, temp, start, mid, end); //두개로 나누어진 배열방 병합 
	}
	
}
 
int main(void){
	int data[10] = {1,10,5,8,7,6,4,3,2,9};
	int number= sizeof(data) / sizeof(int);
	int temp[number];

	mergeSort(data, temp, 0, number-1);
	
	for(int i = 0; i < number; i++){
	printf("%d ",data[i]);	
	}
	
	return 0;	
} 
