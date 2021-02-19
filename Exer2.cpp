#include <iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int i, num;
 
    cout<<"Enter size of the array: ";
    cin>>num;
 
    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    cout<<"All negative elements in array are:";
    for(i=0; i<num; i++)
    {
        if(arr[i] < 0)
        {
            cout<<arr[i];
        }
    }
 
    return 0;
}
