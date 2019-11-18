#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    int x,y;
    cin>>n>>x>>y;
    ll arr[n+x+y];
    
    for (int i=x;i<n+x;i++) {
        cin>>arr[i];
    }
    
    for (int i=x;i<n+x;i++){
        bool rain_min(true);
        int min=arr[i];

        for (int j=1;j<=x;j++){
            if(arr[i-j]<=min){
                rain_min=false;break;
            }
        }
        if (rain_min){
         for (int j=1;j<=y;j++){
            if(arr[i+j]<=min){
                rain_min=false;break;
            }
        }
    }

        if (rain_min==true){
            cout<<i+1<<endl;break;
        }
    }
}
