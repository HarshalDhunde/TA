#include <iostream>
#include <queue>
using namespace std;
void printBFS(int** adjMat,int v,bool* visited,int sv,int ev){
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    while(q.size()!=0){
        int x=q.front();
        if(x==ev){
            cout<<"true";
            return;
        }
        for(int i=0;i<v;i++){
            if(adjMat[x][i]==1 && visited[i]==false){
                q.push(i);
                visited[i]=true;
            }
        }
        q.pop();
    }
    cout<<"false";
    return;
}
int main() {
    // Write your code here
    int v,e,sv,ev;
    cin>>v>>e;
    if(e==0){
        for(int i=0;i<v;i++){
            cout<<"false";
        }
        return 0;
    }
    int** adjMat=new int*[v];
    for(int i=0;i<v;i++){
        adjMat[i]=new int[v];
        for(int j=0;j<v;j++){
            adjMat[i][j]=0;
        }    
    }
    for(int i=0;i<e;i++){
        cin>>sv>>ev;
        adjMat[sv][ev]=1;
        adjMat[ev][sv]=1;
    }
    bool* visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    int sv1,ev1;
    cin>>sv1>>ev1;
   // printBFS(adjMat,v,visited,0); // 
    printBFS(adjMat,v,visited,sv1,ev1);
    
// Delete all the memory
  for(int i=0;i<v;i++){
    delete[] adjMat[i];
  }
  delete[] adjMat;
  delete[] visited;
  return 0;
    
}
