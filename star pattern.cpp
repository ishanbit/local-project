#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"enter number of rows"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int space=row-i;space>0;space--){
            cout<<"  ";
        }
        for(int j=i;j>1;j--){
            cout<<"* ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i=row;i>0;i--){
        for(int space=row-i;space>0;space--){
            cout<<"  ";
        }
        for(int j=i;j>1;j--){
            cout<<"* ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
