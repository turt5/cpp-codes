/*
Tree:
- Directed Acyclic Graph (DAG)
- # of edges = v-1
- no parallel path/duplicate path
*/

/*
Spanning Tree:
- Subgaph: newV=V
           newE=V-1
- acyclic
- no loops
- no parallel or duplicate paths
- connected


Spanning tree is a subgraph 
*/

#include<bits/stdc++.h>
using namespace std;

const int n=107;
int _parent[n];
int _rank[n];

void makeSet(int x){
    _parent[x]=x;
    _rank[x]=0;
}

int findSet(int x){
    if(_parent[x]==x){
        return x;
    }else{
        int friend_=findSet(_parent[x]);
        _parent[x]=friend_;
        return friend_;
    }
}

bool Union(int u, int v){
    int pU=findSet(u);
    int pV=findSet(v);

    if(pU==pV){
        return false;
    }else{
        //union by rank
        if(_rank[pU]>_rank[pV]){
            _parent[pV]=pU;
        }else if(_rank[pU]<_rank[pV]){
            _parent[pU]=pV;
        }else{
            _rank[pU]++;
            _parent[pV]=pU;
        }
        return true;
    }

}

class Edge{
    public:
    int u,v,w;
};

bool compare(Edge a, Edge b)
{
    if(a.w>=b.w) return true;
    else return false;
}

int minimumSTcost(vector< Edge > edges, int V)
{
    for(int i=0; i<V; i++)
        makeSet(i);

    sort(edges.begin(), edges.end(), compare);

    int mstCost = 0;

    for(Edge edge : edges)
    {
        bool connectionEstablish = Union(edge.u, edge.v);
        if(connectionEstablish==true)
        {
            // cout << edge.u << " " << edge.v << endl;
            mstCost = mstCost + edge.w;
        }
    }
    return mstCost;
}


int main()
{
    freopen("input.txt", "r", stdin);
    int V, E; cin >> V >> E;
    vector< Edge > edges(E);
    for(int i=0; i<E; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }


    int result = minimumSTcost(edges, V);
    cout <<"Minimum Spanning Tree Cost: "<< result << endl;

    return 0;
}
