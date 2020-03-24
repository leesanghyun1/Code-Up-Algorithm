#include <stdio.h>
//Quick Sort
//Ư���� ��쿡�� �־��� �ð�(ex �̹� ���ĵ��ִ� ���) 
//���� ���� �˰��� ->�迭���Ҹ� ����� ���� 
//Ư���� ���ذ�(pivot) ���� �Ǿ�, �߰�, �ǵڷ� ����
//���غ��� ���������� �ǹ����� ū���� ã�� ���� �ں��� �ǹ����� ��������ã�Ƽ� ���� ��ġ �ٲ� 
//ū��, �������� ���� �������� �������� �ǹ��� ���� �ǰ� �� �ǹ����� ������ �̷�������� 
//���ĵ� �ǹ����� ������ �׾տ����� �ǹ��� ���� �������� �ڴ� �ǹ��� ���� ū����� ������ �� ���� 
//���� �ǹ��� ���� ���� ������ ������ �Ȱ��� �տ� �ߴ��� ���� 
int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};
     
void quickSort(int *data, int start, int end){
	if(start >= end){ //���Ұ� 1���� ��� 
		return;
	}
	
	int key = start; //�ǹ� ��
	int i = start +1;
	int j = end; 
	int temp;
	
	while(i <= j){ //������ ������ �� 
		while(data[i] <= data[key]){ //Ű ������ ū ���� ������ ���� 
			i++;
		}
		
		while(data[j] >= data[key] && j > start) { //Ű ������ ���� ���� ������ ���� 
			j--;
		}
		
		if( i > j ){ //������ ���� 
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
