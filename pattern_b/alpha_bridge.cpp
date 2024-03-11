// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int nsp=n-1;
    int m =n-1;
    for(i=1;i<=2*n-1;i++){
        cout<<(char)(64+i);
    }
    cout<<endl;
    //alphabet
    for(j=1;j<=m;j++){
        int a=1;
        //pattern
        for(k=1;k<=m+1-j;k++){
            cout<<(char)(64+a);
            a++;
        }
        //space
        for(int l=1;l<=2*j-1;l++){
            cout<<" ";
            a++;
        }
    
        //pattern
        for(int u=1;u<=m+1-j;u++){
            cout<<(char)(64+a);
            a++;
    }
    cout<<endl;
}
}
