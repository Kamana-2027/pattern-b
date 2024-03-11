//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int nsp=n-1;
    for(i=1;i<=n;i++){
        //space
        for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        //number
        for(k=1;k<=2*i-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
}
