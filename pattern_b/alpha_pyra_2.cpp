//      A
//    B A B
//  C B A B C
// D C B A B C D

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int nsp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        //alphabets
        for(k=i;k>=1;k--){
            cout<<(char)(64+k)<<"";
        }
        for(int l=2;l<=i;l++){
            cout<<(char)(64+l)<<"";
        }
        cout<<endl;

    }
}