# include <iostream>
using namespace std;
 
class stacktest{
    public: 
        typedef struct node{
            int data; 
            struct node *next;
        }node1;
    node1* top;
    
    void push(int ele){
        struct node *temp;
        temp = (struct node* ) malloc(sizeof(struct node));
        if (temp==NULL){
            cout<<"Stack is Overflow"<<endl;
        }
        temp -> data = ele;
        temp -> next = top;
        top = temp;
    }

    void pop(){
        struct node *temp;
        int item;
        if(top==NULL){
            cout<<"Stack is Underflow "<<endl;
            return;
        }
        temp = top;
        item = temp -> data;
        top = top -> next;
        free(temp);
        cout<<"Element popped: "<<item;
    }
    void display(){
        struct node *temp;
        if(top!=NULL){
            temp = top;
            while (temp->next!=NULL)
            {
                cout<<" "<<temp->data;
                temp = temp->next;
            }            
        }else{
            cout<<"Stack is empty "<<endl;
        }

    }
};

int main(){
    struct node* head = NULL;
    int i, ch, ele;
    stacktest s;

    while (ch!=4){   
        cout<<"---------------------------------"<<endl;
        cout<<"Select your choice: "<<endl;
        cout<<"1: Push"<<endl;
        cout<<"2: Pop"<<endl;
        cout<<"3: Display"<<endl;
        cout<<"4: Exit"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter element to insert "<<endl;
            cin>>ele;
            s.push(ele);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            cout<<"Invalid Choice "<<endl;
            break;
        }
    }
        



    return 0;
}
