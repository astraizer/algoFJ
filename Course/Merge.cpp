#include <stdio.h>

int array[]={9,11,1,19,2,5,10,7,18};
int temp[10005];

void mergeSort(int left,int right){
	if(left==right){
		return;
	}
	int mid = (left+right)/2;
	mergeSort(left,mid);
	mergeSort(mid+1,right);
	
	//process merge
	int leftElementRight =mid;
	int rightElementRight = right;
	
	int idxLeft=left;
	int idxRight = mid+1;
	int idxTemp=left;
	while(idxLeft<=leftElementRight && idxRight <= rightElementRight){
		if(array[idxLeft]<=array[idxRight]){
			temp[idxTemp]=array[idxLeft];
			idxLeft++;
		}
		else{
			temp[idxTemp]=array[idxRight];
			idxRight++;
		}
		idxTemp++;
	}
	while(idxLeft<=leftElementRight){
		temp[idxTemp]=array[idxLeft];
		idxLeft++;
		idxTemp++;
	}
	while(idxRight<=rightElementRight){
		temp[idxTemp]=array[idxRight];
		idxRight++;
		idxTemp++;
	}
	for(int i=left;i<=right;i++){
		array[i]=temp[i];
	}
}

int main(){
	mergeSort(0,7);
	for(int i=0;i<8;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
