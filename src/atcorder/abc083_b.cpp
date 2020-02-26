#include<cstdio>

int main() {
    int N, A, B;
    scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&B);

    int result = 0;
    for(int i = 1; i <= N; i++) {
        int total = 0;
        int target = i;
        while(target > 0) {
            total += target%10;
            target /= 10;
        }
        if(A <= total && total <= B) {
            result += i;
        }
    }
    printf("%d\n",result);
}
