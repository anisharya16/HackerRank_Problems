#include <iostream>
#include <deque> 
using namespace std;


void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> q;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[q.front()]<<" ";
        while(!q.empty() && q.front()<=i-k){
            q.pop_front();
        }
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
        
    }
    cout<<arr[q.front()];

}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       cout<<"\n";
       t--;
     }
     return 0;
}
