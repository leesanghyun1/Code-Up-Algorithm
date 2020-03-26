#include<stdio.h>
//범위조건이 있는경우 빠름(데이터 크기가 한정되어있을때) 
//크기를 기준으로 갯수를 셈
//시간복잡도 O(N)

void CountringSort(int *data,int *count,int num){

	for(int i=0; i<6; i++){
		count[i] = 0;
	}
	for(int i=0; i<num; i++){
		count[data[i]]++;
	}
	for(int i=0; i<6; i++){
		if(count[i] != 0){
			for(int j=0; j < count[i]; j++){
					printf("%d", i);
			}
		}
	}
	
}

 int main(void){
 	int data[30]={1,3,4,2,4,3,4,2,5,5,5,4,2,3,4,2,1,2,3,4,5,1,2,3,4,1,2,5,1,2};
 	int count[5];
 	int num=sizeof(data)/sizeof(int);
 	CountringSort(data,count,num);
 	
 	return 0;
 } 
