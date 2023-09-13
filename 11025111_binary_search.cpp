#include <iostream> 
#include <algorithm>
#include <cstdlib>
#include <ctime> 
using namespace std; 
 
bool binarysearch(int* arr, int len, int* index,int target) { //Binary searching...
    int first = 0, last = len - 1; 
    while (first <= last) { 
        //cout << first << "_" << last<<endl; 
        int mid = (first + last) / 2; 
        if (target > arr[mid]) { 
            first = mid + 1; 
        } 
        else if (target < arr[mid]) { 
            last = mid - 1; 
        } 
        else { 
            *index = mid; 
            return true; 
        } 
    } 
    return false; 
} 
 
int main(){ 
	//-----------------------------------------	
	int lenth,i;
	int find,position=-1; 
	cout<<"輸入陣列長度：";
	cin>>lenth;
	int *arr=new int[lenth];
	srand(time(NULL));
	for(i=0;i<lenth;i++){
		arr[i]=rand()%100;
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"After sorting：";
	//
	sort(arr, arr + lenth);//    <-----------------------內建排序法在這裡 
	//
	for(i=0;i<lenth;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
    //-----------------------------------------
    cout<<"輸入搜尋值：";
    while(cin>>find){ 
    	cout<<endl;
    	bool result = binarysearch(arr, lenth, &position, find); 
    	cout << "Find：" << find << endl; 
    	cout << "Result：" << result <<endl; 
    	cout << "Position:" << position + 1 << endl<<endl<<endl; 
    	cout<<"輸入搜尋值：";
	}
}
