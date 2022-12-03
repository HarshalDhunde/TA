#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n,prime=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        prime=1;
         for(int j=2;j<=(i/2);j++){
             if(i%j==0){
                 prime=0;
                 break;
             }      
         }
        if(prime==1){
            cout<<i<<endl;
        }
    }
}


