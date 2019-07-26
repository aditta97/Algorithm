#include <stdio.h>
#include <stdlib.h>
void main() {
    int option;
    int adj_mat[50][50];
    int n;
    int in_deg, out_deg, i, j;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);
    read_graph(adj_mat, n);
    printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
    for (i = 1; i <= n; i++) {
        in_deg = out_deg = 0;
        for (j = 1; j <= n; j++) {
            if (adj_mat[j][i] == 1)
                in_deg++;
        }
        for (j = 1; j <= n; j++)
            if (adj_mat[i][j] == 1)
                out_deg++;
        printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n", i, in_deg, out_deg,
                in_deg + out_deg);
    }
    return;
}
