#include <iostream>
using namespace std;

int stack[5], choice, top, ele, i;
int is_full();
int is_empty();
void push();
void pop();
void peek();
void size();
void display();

int main(){
    top = -1;
    cout<<"-----------------------------------"<<endl;
    cout<<"Stack operations using array "<<endl;
    do{
        cout<<"-----------------------------------"<<endl;
        cout<<"Enter your choice: "<<endl;
        cout<<"1.PUSH\n2.POP\n3.PEEK\n4.SIZE\n5.DISPLAY\n6.EXIT"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                peek();
                break;
            }
            case 4:{
                size();
                break;
            }
            case 5:{
                display();
                break;
            }
            case 6:{
                cout<<"Exiting..."<<endl;
                break;
            }
            default:{
                cout<<"Please enter valid choice(1/2/3/4/5/6)";
            }
        }
    }while (choice != 6);               
    
    
    return 0;
}

int is_full(){
    if(top==4){
        return 1;
    }else{
        return 0;
    }
}

void push(){
    if(is_full() == 1){
        cout<<"Stack is overflow"<<endl;
    }else{
        cout<<"Enter an element to add in the stack: "<<endl;
        cin>>ele;
        top++;
        stack[top] = ele;
    }
}

int is_stack_empty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void pop(){
    if(is_stack_empty() == 1){
        cout<<"Stack is underflow "<<endl;
    }else{
        cout<<"Element popped: "<<stack[top]<<endl;
        top--;
    }
}

void peek(){
    cout<<"Peek element is "<<stack[top]<<endl;
}

void size(){
    cout<<"No. of elements in stack is "<<top+1<<endl;
}

void display(){
    if(is_stack_empty() ==  1){
        cout<<"Stack is underflow "<<endl;
    }else{
        cout<<"Stack elements: "<<endl;
        for(i=top; i>=0; i--){
            cout<<" "<<stack[i];
        }
        cout<<endl;
    }
}
