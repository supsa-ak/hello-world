# include <iostream>
using namespace std;
 
int factorial(int);

int main(){
    int i, fact, num;
    cout<<"Enter a number to get factorial: "<<endl;
    cin>>num;
    fact = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;

    return 0;
}

int factorial(int no){
    if(no<0){
        return -1;
    }
    if(no==0){
        return 1;
    }
    return(no*factorial(no-1));
}
