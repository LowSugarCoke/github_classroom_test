#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    
    int* arr = new int[len];
    
    for(int i=0; i<len; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    delete arr;



    return 0;
}