# include <iostream>
using namespace std;
 
void quickSort(int [10], int, int);

int main(){
    int x[10], size, i;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter "<<size<<"elements: "<<endl;
    for(i=0; i<size; i++){
        cin>>x[i];
    }

    quickSort(x, 0, size-1);
    
    cout<<"Sorted elements: ";
    for(i=0; i<size; i++){
        cout<<x[i]<<" ";
    }

    return 0;
}

void quickSort(int x[10], int first, int last){
    int pivot, j, temp, i;

    if(first<last){
        pivot = first;
        i = first;
        j = last;

        while(i<j){
            while(x[i]<=x[pivot]&&i<last){
                i++;
            }
            while(x[j]>x[pivot]){
                j--;
            }
            if(i<j){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        temp = x[pivot];
        x[pivot] = x[j];
        x[j] = temp;
        quickSort(x, first, j-1);
        quickSort(x, j+1, last);
    }
}

// End of program
