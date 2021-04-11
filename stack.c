#include<stdio.h>
#define capacity 3
int stack [capacity];
int top=-1;

void push(int x){
    if(top<capacity-1){
    top=top+1;
stack[top]=x;
printf("Succesfully added item: %d\n",x);
    }else{
    printf("No space\n");

    }

}

int pop(){
    if(top>=0){
            int val=stack[top];
        top=top-1;
    printf("pop:%d\n",val);

    }
    printf("NO item");
    return -1;

}

int peek(){

    if(top>=0){

        return stack[top];
    }
    printf("No item\n");

return -1;


}



int main()
{
        peek();
   push(10);
   push(20);
   push(30);
     pop();
      printf("Top of stack: %d\n",peek());
   push(40);


  printf("Top of stack: %d\n",peek());
   return 0;



}
