 #include <stdio.h>
//Insertion Sort
//각 숫자를 적절한 위치에 삽입 - 필요할 때만 위치를 바꿈
//앞에있는 원소들이 이미 정렬되어있다고 '가정'읋함
//거의 정렬된 상태라면 효과적 
int main(void){ 
	int i,j,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0;i<10;i++){	
		j=i;
		while(j >=0 && array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			j--;
		}
	}
	
	for(int i=0; i<10;i++){
	printf("%d ",array[i]);	
	}
	
	return 0;
}
