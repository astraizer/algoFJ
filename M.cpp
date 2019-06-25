#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int l=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
                l++;
            else if(s[i]=='B')
                b++;
        }
        if(l==b)
            printf("None\n");
        else if(l>b)
            printf("Lili\n");
        else
            printf("Bibi\n");
    }
    return 0;
}