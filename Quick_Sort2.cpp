#include <stdio.h>
//Quick Sort
//특정한 경우에는 최악의 시간(ex 이미 정렬되있는 경우) 
//분할 정복 알고리즘 ->배열원소를 나누어서 정렬 
//특정한 기준값(pivot) 보통 맨앞, 중간, 맨뒤로 설정
//기준부터 오르쪽으로 피벗보다 큰값을 찾고 가장 뒤부터 피벗보다 작은값을찾아서 서로 위치 바꿈 
//큰값, 작은값이 서로 엇갈리면 작은값과 피벗값 스왑 되고 그 피벗값은 정렬이 이루어진상태 
//정렬된 피벗값이 나오면 그앞에값은 피벗값 보다 작은값들 뒤는 피벗값 보다 큰값들로 분할이 된 상태 
//그후 피벗값 기준 왼쪽 오른쪽 나누어 똑같이 앞에 했던것 실행 
int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};
     
void quickSort(int *data, int start, int end){
	if(start >= end){ //원소가 1개인 경우 
		return;
	}
	
	int key = start; //피벗 값
	int i = start +1;
	int j = end; 
	int temp;
	
	while(i <= j){ //엇갈릴 떄까지 반 
		while(data[i] <= data[key]){ //키 값보다 큰 값을 만날때 까지 
			i++;
		}
		
		while(data[j] >= data[key] && j > start) { //키 값보다 작은 값을 만날때 까지 
			j--;
		}
		
		if( i > j ){ //엇갈린 상태 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j-1);
	quickSort(data, j + 1, end);
	
}     
     
int main(void){ 
	
	quickSort(data, 0 , number - 1);
	
	for(int i = 0; i < number; i++){
	printf("%d ",data[i]);	
	}
	
	return 0;
}
