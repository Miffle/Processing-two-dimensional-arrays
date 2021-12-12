#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rando(int n, int m, float array1[5][5]){
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<m; j++) {
            array1[i][j] = rand()%50 -1;
        }
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            printf("%5.1f", array1[i][j]);
            printf("\n");
    }
}

int array(int n,int m, float array1[5][5]) {
    int h, c;
    float y, z;
    for(c = 0; c<m; c++) {
        z = 0;
        for (h = 0; h < n; h++) {
            z = z + array1[h][c];
        }
        y = z / n;
        printf("konec= %6.3f ", y);
    }
    return 0;
}
int main() {

    int n, m;

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    float A[5][5];
    rando(n,m, A);
    array(n,m, A);
    return 0;
}
