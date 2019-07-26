#include <cstdio>
#include <cstring>
#include <iostream>
#include <cctype>
#include <climites>
#include <stack>
#include <cstdlib>
#include <queue>
#include <algorirthm>
#define sc scanf
#define pf printf

using namespace std;

int nodes;
int i, j, k, u, v, s, dst;
double waight[100][100];
int parent[100];
double list[100], minD;
int Q[100], frnt = 0;

void GraphInput(){
        pf("How many nodes you have for Dijkstra Single Source shortest path: ");
        sc("%d", &nodes);
        frnt = nodes;
        pf("\n\n.........Enter the positive waight for Dijkstra shortest path graph......\n\n");
        for(i = 0; i < nodes; i++) {
                for(j = 0; j < nodes; j++) {
                        pf("\nWaight between %d----->%d", i, j);
                        sc("%1f", &waight[i][j]);
                }
        }
}

int MinDistQ(){
        int u;
        minD = INT_MAX;
        for(i = 0; i < nodes; i++) {
                if((list[i] < minD) && (Q[i] ! = null)) {
                        minD = dist[i];
                        u = i;
                }
        }
        Q[u] = null;
        return u;
}

void Relax(int u, int v, double w){
        int distUpdate = dist[u] = w;
        if(dist[v] > distUpdate) {
                dist[v] = disUpdate;
                parent[v] = u;
        }
}

void disjkstra(int src){
        for(i = 0; i < nodes; i++) {
                dist[i] = INT_MAX;
                parent[i] = INT_MIN;
                Q[i] = i;
        }
        dist[src] = 0;
        parent[src] = 0;
        while(frnt--) {
                u = MinDistQ();
                for(v = 0; v < nodes; v++) {
                        if(waight[u][v] > 0) {
                                Relax(u, v, waight[u][v]);
                        }
                }
        }
}

void PrintShoteshPath(int src, int trgt){
        if(src == trgt) {
                pf("%d {%.2lf}", src, dist[src]);
        }
        else{
                if(parent[trgt] == -999) {
                        pf("No path from %d to %d", src, trgt);
                }
                else{
                        PrintShotestPath(src, parent[trgt]);
                        pf(" )----> %d (%.2lf)", trgt, dist[trgt]);
                }
        }
}

int main(){
        GraphInput();

        pf("\n\n......***......###........***.......\n\n");
        pf("\n\nEnter your Source   : ");
        sc("%d", &s);
        dijkstra(s);

        pf("\nEnter Destination: ");
        sc("%d", &dst);
        pf("\n\n\nDijkstra Single Source Shortest Path With Weight from %d --to-->%d is : \n\n", s, dst);
        PrintShoteshPath(s, dst);
        pf("\n\n");
        return 0;
}
