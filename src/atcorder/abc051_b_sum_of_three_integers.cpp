#include<cstdio>

int main() {
    int K,S;
    scanf("%d",&K);
    scanf("%d",&S);

    int cnt = 0;
    for(int x = 0; x <= K; x++){
        for(int y = 0; y <= K; y++){
            if(0 <= S-x-y && S-x-y <= K){
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}
