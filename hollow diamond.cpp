#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"enter number of rows"<<endl;
    cin>>row;
    for(int i=row;i>0;i--){
        if(i==row){
            for(int j=1;j<=2*row-1;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            for(int space=1;space<=2*(row-i)-1;space++){
                cout<<"  ";
            }
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=row;i++){
        if(i==row){
            for(int j=1;j<=2*row-1;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            for(int space=1;space<=2*(row-i)-1;space++){
                cout<<"  ";
            }
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
