# include <iostream>
using namespace std;
  
int main(){
    int arr[100], n, temp, i, j;
    cout<<"Enter number of elements you want to be sort: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        temp = arr[i];
        j = i - 1;
        while(temp<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = temp;
    }
    
    cout<<"Sorted elements are: "<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<endl;
 
    return 0;
}
