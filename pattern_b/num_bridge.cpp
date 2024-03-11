// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    int m=n-1;
    for(i=1;i<=4;i++){
        cout<<i;
    }
    for(j=n-1;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
 
    int p,l,h,o;
    for(l=1;l<=m;l++){
        for(p=1;p<=m+1-l;p++){
            cout<<p;
        }
        for(h=1;h<=2*l-1;h++){
            cout<<" ";
        }
        for(o=n-l;o>=1;o--){
            cout<<o;
        }
        cout<<endl;
    }
}
    