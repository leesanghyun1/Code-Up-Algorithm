#include <stdio.h>
//merge sorts
//�迭�� ���� �� 
//���߿� �����Ͽ� ����

void merge(int data[], int temp[], int start, int mid, int end){ //���� 
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
		for(int i = 0; i <= mid - part1; i++){ //���� �迭 ���� �������� �־��� 
			data[index + i] = temp [part1 + i];
		}	
}

void mergeSort(int data[], int temp[], int start, int end){ // �����ҹ迭, �ӽ������,����,�� 
	if(start < end){
		int mid = (start + end) / 2;
		mergeSort(data, temp, start, mid); //�� �迭 
		mergeSort(data, temp, mid + 1, end); //�� �迭 
		merge(data, temp, start, mid, end); //�ΰ��� �������� �迭�� ���� 
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
