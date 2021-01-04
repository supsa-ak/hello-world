# include <iostream>
using namespace std;
 
int main(){
    int arr[100], n, i, j, temp;
    cout<<"Enter number of elements you want to sort: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
   
    for(i=0; i < (n-1); i++){
        
        for(j=0; j < (n-i); j++){
        
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];       
                arr[j+1] = temp;       
            }
        }
    }
    cout<<"Sorted elements are: ";
    for (i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 // End of program
    return 0;
}
