#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
	bool check[size];
    int i;
    for(int j = i+1; j<size; j++){
    cout<<"One of the elements is: "<<endl;
    cin>>arr[i];     
	}
      
   for(int i=0;i<size;i++){
      check[i] = 0;
   }
   for(int i=0; i<size; i++){
      if(check[i]== 1){
         continue;
      }
      int count = 1;
      for(int j = i+1; j<size; j++){
         if (arr[i] == arr[j]){
            check[j] = 1;
            count++;
         }
      }
      cout<<"frequency of "<<arr[i]<<" is: " << count << endl;
   }
	
    
    return 0;
}

