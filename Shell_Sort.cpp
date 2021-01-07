# include <iostream>
using namespace std;
 
void shellSort(int arr[], int num){
    int tmp;
    for(int i = num/2; i>0; i=i/2){
        for(int j=i; j<num; j++){
            for(int k=j-1; k>=0; k=k-i){
                if(arr[k+1]>=arr[k]){
                    break;
                }
                else{
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}

int main(){
    int arr[20];
    int k, num;
    cout<<"Enter total no. of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers: "<<endl;
    for(k=0; k<num; k++){
        cin>>arr[k];
    }
    shellSort(arr, num);
    cout<<"Sorted elements: "<<endl;
    for(k=0; k<num; k++){
        cout<<arr[k];
    }


    return 0;
}
