 #include <stdio.h>
//Bubble_Sort
//가장 옆에있는것과 비교 -> 가장큰값이 가장 뒤로 가게됨 
//다음 반복때는 가장큰값 점점빼면서 비교 
//가장 효율이 떨어지고 느림 ->선택정렬과 시간복잡도는 같지만 자리바꾸는 연산이 더 많이 일어남 
int main(void){ 
	int i,j,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){	
			if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;	
			}
		}
	}
	
	for(int i=0; i<10;i++){
	printf("%d ",array[i]);	
	}
	
	return 0;
}
