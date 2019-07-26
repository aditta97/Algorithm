#include <iostream>
#include <cstdio>

#define sc scanf
#define pf printf

using namespace std;
int adj[100][100], parent[100], color[100];
int tim = 0, inTime[100], ouTime[100];
int i, j, u, v, nodes;
int white = 111, gray = 222, black = 333;

void DFS_visit(int u){
        color[u] = gray;
        tim++;
        inTime[u] = tim;

        for( v= 0; v < nodes; v++) {
                if(adj[u][v]==1) {
                        if(color[v] == white) {
                                parent [v] = u;
                                DFS_visit(v);
                        }
                }
        }

        color[u] = black;
        tim++;
        ouTime[u] = tim;
}

void DFS(){
        for(i = 0; i < nodes; i++) {
                color[i] = white;
                parent[i] = -9999;
        }
        tim = 0;
        for(u = 0; u < nodes; u++) {
                if(color[u] == white) {
                        DFS_visit(u);
                }
        }
}

void DFS_output(){
        for(u = 0; u < nodes; u++) {
                cout<<"Node["<<u<<"] Time["<<inTime[u]<<" / "<<ouTime[u]<<"]";
                if(parent[u] == -9999) {
                        cout<<"& Parent : "<<parent[u]<<endl;
                }
                else{
                        cout<<"& Parent : "<<parent[u]<<endl;
                }
        }
}

void GraphInput(){
        cout<<"How many nodes you have? :";
        cin>>nodes;
        pf("\n\n...Enter adjacency matrix (If connected then Enter 1 otherwise 0) of the graph..\n\n");
        for(i = 0; i < nodes; i++) {
                for(j = 0; j < nodes; j++) {
                        pf("\n%d---->%d :", i, j);
                        cin>>adj[i][j];
                }
        }
}

int main(){
        cout<<"----Graph Input----\n\n";
        GraphInput();

        for(i = 0; i< nodes; i++) {
                for(j = 0; j < nodes; j++) {
                        cout<<adj[i][j]<<" ";
                }
                cout<<endl;
        }
        DFS();
        cout<<"----DFS Output----\n\n";
        DFS_output();
        return 0;
}
