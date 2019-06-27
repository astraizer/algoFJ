#include <stdio.h>



int main(){
	int n;
	scanf("%d",&n);
	char a[n+1][n+1];
	char res[n+1][n+1];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res[i][j]=a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='-'){
				for(int k=0;k<n;k++){
					res[i][k]='@';
				}
			}
			else if(a[i][j]=='|'){
				for(int k=0;k<n;k++){
					res[k][j]='@';
				}
			}
			else if(a[i][j]=='/'){
				int ujung=n-1-j-i;
				for(int k=0;k<n;k++){
					for(int l=0;l<n;l++){
						if(l+k+ujung==n-1){
							res[k][l]='@';
						}
					}
				}
			}
			else if(a[i][j]=='\\'){
				int ujung = i-j;
				for(int k=0;k<n;k++){
					for(int l=0;l<n;l++){
						if(k==l+ujung){
							res[k][l]='@';
						}
					}
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%c",res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
