/*

5

1
01
101 
0101
10101

*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    int n; cin>>n;
    for (int i= 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2 == 0){
                if(j%2== 0) cout<< 1; else cout<<0;
            }else{
                if(j%2 != 0) cout<< 1; else cout<<0;
            }
            
        }
        cout<<endl;
    }
}