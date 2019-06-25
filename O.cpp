#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        int n;
        scanf("%d",&n);
        int even=0;
        int odd=0;
        int b;
        for(int i=0;i<n;i++){
            scanf("%d",&b);
            if(b%2==0)
            	even++;
            else
            	odd++;
        };
        
        printf("Odd group : %d integer(s).\n",odd);
        printf("Even group : %d integer(s).\n\n",even);
    }
    return 0;
}
