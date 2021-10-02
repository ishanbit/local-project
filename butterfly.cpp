#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"enter number of rows"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int space=2*(row-i);space>0;space--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int space=2*(row-i);space>0;space--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
