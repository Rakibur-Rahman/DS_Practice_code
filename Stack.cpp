
#include<bits/stdc++.h>
using namespace std;

#define capacity 3
int stac [capacity];
int top =-1;


void push(int n){
    if(top<capacity-1){
    top=top+1;
  stac [top]=n;
   cout<<"Succesfully added:"<<n<<endl;
    }
    else{
    cout<<"No spces"<<endl;
    }

}

int pop(){





}

int peek(){
    if(top>=0){

        return stac[top];

    }
    cout <<"NO item"<<endl;
    return -1;



}



int main(){
    push(23);
    push(24);
    push(25);
    push(26);
    cout <<peek()<<endl;






}
