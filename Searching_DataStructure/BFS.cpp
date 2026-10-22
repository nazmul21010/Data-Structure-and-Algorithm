#include<bits/stdc++.h>
using namespace std;

const int N = 100; // Maximum number of nodes
bool vis[N];
vector<int>adj[N];

int main() {
for(int i = 0; i< N; i++) {

vis[i] = false; 
}
cout<<"Number of nodes and edges: ";
int n, m; // Number of nodes and edges
cin>>n>>m;
cout<<"Vertices of an edge"<<endl;
int x, y; // Vertices of an edge
for(int i = 0; i< m; i++) {
cin>> x >> y;
adj[x].push_back(y);
adj[y].push_back(x); // Assuming undirected graph
}

queue<int> q;
q.push(1); // Starting from node 1
vis[1] = true;

while(!q.empty()) {
int node = q.front();
q.pop();
cout<<node<< endl;

for (auto v : adj[node]) {
if (!vis[v]) {
vis[v] = true;
q.push(v);
}
}
}
return 0;
}