#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>x;
        arr[i]=x;
    }
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(find(v.begin(), v.end(), arr[i]) != v.end()){
            continue;
        }
        else{
            v.push_back(arr[i]);
        }
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1; i>=0; i--)
        cout << v.at(i) << ' ';
}