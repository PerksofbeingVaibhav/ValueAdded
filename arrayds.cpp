#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int *arr =static_cast<int *>(malloc(sizeof(int) *n));
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    for(int j=n-1;j>=0;j--){
   //     cout<<arr[j];
        printf("%d ", arr[j]);
    }
    return 0;
}
