#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   cin>>t;
  
   while(t--){
       //int ans;
       int n;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       
       int cnt=0,num;
        for(int i =0; i < n-1; i++)
    {
        if(v[i] == v[i+1])
            num = v[i];
        while(v[i] == v[i+1])
        {
            cnt++;
            //i+= 1;
            i++;
        }
    }
    cnt++;
   cout<<cnt<<endl;
   /*if(cnt<n){
       cout<<cnt/2<<endl;
       break;
   }*/
    
    //ans=max(cnt);
   // cout <<num<< " "<<cnt<<endl;
   //cout<<cnt<<endl;
}
   }

