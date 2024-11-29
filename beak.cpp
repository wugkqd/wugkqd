#include <stdio.h>

void charToInt(int *, char *, int, int);

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[M][N];
    /*
    for (int i = 0; i < N; i++) {
        int str[M];
        scanf("%d", str);
        for (int j = 0; j < M; j++) {
            int temp = int(str[j]);
            arr[j][i] = temp;
        }
        printf("\n");
    }
    */
    printf("\n");
    for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
            printf("%d ", arr[M][N]);
        }
        printf("\n");
    }
}
*
/*
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < M; i++) {
        scanf("%s\n");
        
    }
}
*/

void charToInt(int *arr, char *str, int M, int N)
{
    
    for (int i = 0; i < M; i++)
    {
        if (str[i] == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}