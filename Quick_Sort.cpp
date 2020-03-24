#include <stdio.h>
//Quick Sort
//Ư���� ��쿡�� �־��� �ð�(ex �̹� ���ĵ��ִ� ���) 
//���� ���� �˰��� ->�迭���Ҹ� ����� ���� 
//Ư���� ���ذ�(pivot)
//��� �ǹ��� ���� �� ������ �ǹ����� ū�� �������� �ǹ����� �������� ã��
//��,���� ���� �ǹ� �ε����� ����� �� �� ���� ����
//�ǹ��� ���� �¿�� �������� ��Ƽ���� ������ ���� ��Ƽ�� ������  

void swap(int *data, int start, int end){ //���� 
	int temp = data[start];
	data[start] = data[end];
	data[end] = temp;
}

int partition(int *data, int start, int end){
	int pivot = data[(start + end)/2];
	while(start <= end){
		while(data[start] < pivot){ //���� ��Ƽ�� �ǹ����� ������ ��� �Ѱ��� 
			start++;
		}
		while(pivot < data[end]){ // ������ ��Ƽ�� �ǹ����� ũ�� ��� �Ѱ��� 
			end--;
		}
		if(start <= end){
			swap(data, start, end); //������ ��Ƽ�ǿ� ù��° �ε��� �� 
			start++;
			end--;
		}
	}
	return start; //������ ��Ƽ�ǿ� ù��° �ε����� �Ѱ��� 
} 

void quickSort(int *data, int start, int end){
	int start2 = partition(data,start,end); //������ ��Ƽ�ǿ� ù��° �ε��� 
	if(start < start2 - 1){ //���� ��Ƽ�� 
		quickSort(data, start, start2 - 1);
	}
	if(start2 < end){ //������ ��Ƽ�� 
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
