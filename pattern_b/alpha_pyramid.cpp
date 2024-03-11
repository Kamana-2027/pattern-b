//       A
//     A B C
//   A B C D E
// A B C D E F G

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
        //alphabet
        for(k=1;k<=2*i-1;k++){
            cout<<(char)(64+k);
        }
        cout<<endl;
    }
}