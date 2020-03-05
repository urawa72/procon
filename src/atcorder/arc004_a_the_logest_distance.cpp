#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int N;
    scanf("%d",&N);
    int P[N][2];
    for(int i = 0; i < N; i++){
        scanf("%d",&P[i][0]);
        scanf("%d",&P[i][1]);
    }
    double pre = 0.0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            double cur = sqrt(pow(P[i][0]-P[j][0],2.0)+pow(P[i][1]-P[j][1],2.0));
            if(cur > pre){
                pre = cur;
            }
        }
    }
    printf("%lf\n",pre);
}
