#include<stdio.h>

int main() {
    int n, A[100];
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
    }

    int cnt = 0;
    int i = 0;
    bool flag = true;
    while(flag) {
        flag = false;
        for(int j = n-1; j >= i+1; j--) {
            if(A[j] < A[j-1]) {
                int tmp = A[j-1];
                A[j-1] = A[j];
                A[j] = tmp;
                cnt++;
                flag = true;
            }
        }
        i++;
    }

    for(int i = 0; i < n; i++) {
        if(i != n - 1) {
            printf("%d ",A[i]);
        }else{
            printf("%d\n",A[i]);
        }
    }
    printf("%d\n",cnt);
}
