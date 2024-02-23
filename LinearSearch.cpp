#include<iostream>
using namespace std;

void LinearSearch(int num, int *arr, int size)
{
    int i=0;
    while(i<=size){
        if(num == arr[i]){
            cout<<num<<" found in the index position "<<i<<endl;
            break;
        }
        ++i;
    }
    if(i>size)
        cout<<"NO MATCH FOUND!!";

}

int main(void)
{

    int num;
    int arr[] = {12,34,56,35,98,52,65,92,62,43};

    int n = sizeof(arr)/sizeof(int);

    cout<<"Enter the number you want to find: ";cin>>num;

    

    cout<<endl<<"****************************"<<endl;
    LinearSearch(num,arr,n);
    cout<<"****************************"<<endl;

    return 0;
}
