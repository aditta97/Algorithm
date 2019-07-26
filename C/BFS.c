#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>

using namespace std;
int frnt, rear, itm, mx;
int Q[20], graph[10][10], color[25] = {0}, parents[25] = {0}, infinity = -2;

void EnQ(int itm){
        if((frnt == 1 && rear == mx) || frnt == rear + 1) {
                cout<<"Overflow\n";
                return;
        }
        if(frnt == 0) {
                frnnt = 1;
                rear = 1;
        }
        else if(rear == mx) {
                rear = -1;
        }
        else{
                rear = rear + 1;
        }
        Q[rear] = item;
        return;
}

int DeQ(){
        if(frnt == 0) {
                printf("Under flow\n");
                return 0;
        }
        item = Q[frnt];
        if(frnt == rear) {
                frnt = 0;
                rear = 0;
        }
        else if(frnt == mx) {
                frnt = 1;
        }
        else{
                frnt++;
        }
        return itm;
}

void Ginput(){
        int i, j, n;
        n = mx;
        cout<<"Enter the adjacency matrix for each Vertex :\n";
        for(i = 0; i < n; i++) {
                for(j = 0; j < n; j++) {
                        cin>>graph[i][j];
                }
        }
        cout<<"\n\n";
        for(i = 0; i < n; i++) {
                for(j = 0; j < n; j++) {
                        cout<<graph[i][j]<<" ";
                }
                cout<<"\n";
        }
        return;
}

void path(int s, int v){
        if(v==s) {
                cout<<s;
        }
        else if(parents[v] == infinity) {
                cout<<"There have no path\n";
        }
        else{
                path(s, parents[v]);
                cout<<" --> ";
                cout<<v;
        }
}

int main(){
        int distance[25] = {0}, vertex[20], vrtx;
        cout<<"How many nodes of vertex you have...?\n";
        cin>>vrtx;
        mx = vrtx;
        for(int v = 0; v <vrtx; v++) {
                vertex[v];
        }
        Ginput();
        int white = 111, gray = 222, black = 333;
        cout<<"Enter the Source\n";
        int src;
        cin>>src;
        for(int i = 0; i < mx; i++) {
                if(i == src) {
                        vertex[i] = gray;
                }
                else{
                        vertex[i] = white;
                }
                distance[i] - infinity;
                parents[i] = infinity;
        }
        distance[arc] = 0;
        parents[src] = 0;

        EnQ(arc);

        while(frnt != 0) {
                int u;
                u = DeQ();
                for(int l = 0; l < mx; l++) {
                        if(graph[l][u] == 1) {
                                if(vertex[l] == white) {
                                        vertex[l] = gray;
                                        distance[l] = distance[u]+1;
                                        parents[l] = u;
                                        EnQ(1);
                                }
                        }
                }
                vertex[u] = black;
        }
        int destination;
        printf("Enter the Destination :\n");
        scanf("%d", &destination);
        cout<<"\n\n";
        cout<<"From source "<<arc<<" to Destination "<<destination<<" distance is :"<<distance[destination]<<"\n";
        path(src, destination);
        cout<<endl;
        return 0;
}
