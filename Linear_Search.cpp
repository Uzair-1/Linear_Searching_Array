#include<iostream>
using namespace std;
int Linear_Search(int arr[],int s,int key)
{
    for(int i=0;i<s;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
   int s ,key;
   cout <<"Enter the size of array:";
   cin >> s;
   int arr[s];
   for(int i=0;i<s;i++)
   {
    cin >> arr[i];
   }
cout << "Enter the Value_key to check the index " ;
cin  >> key;
 
 cout << Linear_Search(arr,s,key);

}