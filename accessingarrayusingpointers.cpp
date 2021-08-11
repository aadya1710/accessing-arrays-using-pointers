#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int arr[5];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    ptr=arr;
    cout<<"You entered : "<<endl; 
    for(int i=0;i<5;i++){
        cout<<*(ptr)+i<<" ";
    }
    return 0;
}
