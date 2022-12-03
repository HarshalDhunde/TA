#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,y=1,count=0;
    cin>>x;
    while(count<x){
        if((3*y+2)%4!=0){
            cout<<3*y+2<<" ";
        	count++;
        }
        y++;
    }
}
