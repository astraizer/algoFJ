#include <stdio.h>
#include <string.h>

int main(){
	for(int i=0;i<2;i++){	
		char s1[255],s2[255],s3[255];
		scanf("%s %s %s",s1,s2,s3);		
		strcat(s1,"szs");
		strcat(s2,"szs");
		strcat(s3,"szs");
		printf("%s %s %s\n",s1,s2,s3);
	}
	return 0;
}
