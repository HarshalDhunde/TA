#include <iostream>
#include<queue>
using namespace std;
//has path code
bool hasPathHelper(int** edges,int n,int s_v,int e_v,bool* visited){
    // if(n==0 ||n==1){
    //     return false;
    // }
    
    // if(s_v>=n || e_v>=n){
    //     return false;
    // }
    if(s_v==e_v){
        return true;
    }
    visited[s_v]=1;
    if(edges[s_v][e_v]==1){
        return true;
    }
    for(int i=0;i<n;i++){
        // if(i==s_v){
        //     continue;
        // }
        
        if(edges[s_v][i]==1 && visited[i]==false){
            visited[i]=1;
            hasPathHelper(edges,n,i,e_v,visited);
        }
    }
    // cout<<"hii";
    return false;
}

bool hasPath(int **edges, int v, int start, int end){
	bool *visited = new bool[v]();
    for(int i=0;i<v;i++){
        visited[i]=0;
    }
	return hasPathHelper(edges, v, start, end, visited);
	delete[] visited;
}

int main(){
    int n,e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

	int s_v,e_v;
    cin>>s_v>>e_v;
    if(hasPath(edges,n,s_v,e_v)==1){
        cout<<"true";
    }
	else{
        cout<<"false";
    }
    
    return 0;
}
