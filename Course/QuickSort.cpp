#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array[10005]={9,11,1,19,2,5,10,7,18};
int temp[10005];

void quickSort(int left,int right){
	if(left>=right){
		return;
	}
	// do partition
	int randIdx=rand()%right-left+1;
	int pivot = array[randIdx+left];
	int idx=left;
	for(int i=left;i<=right;i++){
		if(array[i]<pivot){
			temp[idx]=array[i];
			idx++;
		}
	}
	int leftElementRight = idx-1;
	temp[idx]=pivot;
	idx++;
	int rightElementLeft = idx;
	for(int i=left;i<=right;i++){
		if(array[i]>pivot){
			temp[idx]=array[i];
			idx++;
		}
	}
	int rightElementRight = idx-1;
	for(int i=left;i<=right;i++){
		array[i]=temp[i];
	}
	quickSort(left,leftElementRight);
	quickSort(rightElementLeft,rightElementRight);
}

int main(){
	srand(time(NULL));
	quickSort(0,7);
	for(int i=0;i<8;i++){
		printf("%d ",array[i]);
	}
	return 0;	
}
