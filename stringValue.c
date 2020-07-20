#include<stdio.h>
#include<string.h>

int main(){
    char strings[10000];
    scanf("%s",strings);
    // gets(strings);
    int res = strings[0] - '0';
    int i;
    for(i=1;i<strlen(strings);i++){
        if(strings[i]=='0' || strings[i]=='1' || res<2){
            res+=(strings[i]-'0');
        }
        else{
            res*=(strings[i]-'0');
        }
    }
    printf("%d",res);
}