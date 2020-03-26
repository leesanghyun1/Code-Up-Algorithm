#include<stdio.h>
//Heap 정렬
//최솟값, 최댓값을 빠르게 찾아내기 위해 완전 이진트리를 기반으로하는 트리 
//최대힙 -부모노드가 자식노드보다 큰힙
//힙 생성 알고리즘(Heapify Algorithm) - 중간에 최대힙이 아닌경우가 있으면 자식노드중 가장큰 값과 부모모드 스왑
//이진트리를 힙구조로 만드는 시간복잡도 - O(N)


void swap(int a, int b,int *data){
	int tmp;
	tmp=data[a];
	data[a]=data[b];
	data[b]=tmp;
}

void heap(int *data,int num){
	
	for(int i=1; i<num; i++){ //우선 최대힙구조로 만듬 
		int c=i;
		while(c>0){
			int root= (c-1)/2; //특정한 원소의 부모 
			if(data[c]>data[root]){
				swap(c,root,data);
			}
			c=root;
		}
	}
	
	for(int i=num-1; i>=0; i--){
		swap(0,i,data); //0번째와 가장큰 마지막 위치바꿈 
		int root = 0;
		int c = 1;
		while(c < i){
			c = 2*root+1; //왼쪽 자식
			if(data[c] < data[c+1] && c < i - 1){ //왼,오 자식 크기비교  
				c++; 	//오른쪽이더 크다면 오른쪽을 부모와 비교대상으로 
			} 	
			//아니라면 왼 자식과비교 
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
