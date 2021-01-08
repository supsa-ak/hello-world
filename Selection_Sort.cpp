# include <iostream>
using namespace std;
 
int main(){
    int arr[100], i, n, j, temp;
    cout<<"Enter the number of elements you want to sort: ";
    cin>>n;

    cout<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; ++i){
        for(j=i+1; j<n; ++j){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted elements are: ";
    for(j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }



    return 0;
}
