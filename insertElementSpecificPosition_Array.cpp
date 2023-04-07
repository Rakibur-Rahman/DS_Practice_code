#include<bits/stdc++.h>
using namespace std;

int main(){


int a[100]={3,4,1,8,11};
int pos,num,i;

cout<<"Enter the position and Number: ";
cin>>pos>>num;

for(i=4; i>=pos; i--){

    a[i+1]=a[i];

}

a[pos]=num;

for(i=0; i<6; i++){
    cout<<a[i]<<" ";
}
return 0;

}
