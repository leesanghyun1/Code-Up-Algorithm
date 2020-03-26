#include<stdio.h>
//Heap ����
//�ּڰ�, �ִ��� ������ ã�Ƴ��� ���� ���� ����Ʈ���� ��������ϴ� Ʈ�� 
//�ִ��� -�θ��尡 �ڽĳ�庸�� ū��
//�� ���� �˰���(Heapify Algorithm) - �߰��� �ִ����� �ƴѰ�찡 ������ �ڽĳ���� ����ū ���� �θ��� ����
//����Ʈ���� �������� ����� �ð����⵵ - O(N)


void swap(int a, int b,int *data){
	int tmp;
	tmp=data[a];
	data[a]=data[b];
	data[b]=tmp;
}

void heap(int *data,int num){
	
	for(int i=1; i<num; i++){ //�켱 �ִ��������� ���� 
		int c=i;
		while(c>0){
			int root= (c-1)/2; //Ư���� ������ �θ� 
			if(data[c]>data[root]){
				swap(c,root,data);
			}
			c=root;
		}
	}
	
	for(int i=num-1; i>=0; i--){
		swap(0,i,data); //0��°�� ����ū ������ ��ġ�ٲ� 
		int root = 0;
		int c = 1;
		while(c < i){
			c = 2*root+1; //���� �ڽ�
			if(data[c] < data[c+1] && c < i - 1){ //��,�� �ڽ� ũ���  
				c++; 	//�������̴� ũ�ٸ� �������� �θ�� �񱳴������ 
			} 	
			//�ƴ϶�� �� �ڽİ��� 
			if(data[root] < data[c] && c < i){
				swap(root, c, data);
			}
			root=c;
		}
	}
}


int main(void){
	int data[]={3,6,4,2,1,5,11,10,8,9,7};
	int num = sizeof(data)/sizeof(int);

	heap(data,num);
	
	for(int i=0;i<num;i++){
		printf("%d ",data[i]);
	}
}
