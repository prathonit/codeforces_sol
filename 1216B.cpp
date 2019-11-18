#include <bits/stdc++.h>    
using namespace std;
int main(){
    int n,ans(0),x;
    cin>>n;
    int arr[n][2];
    for (int i=0;i<n;i++){
        cin>>arr[i][1];
        arr[i][0]=i+1;
    }   
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j][1]>arr[i][1]){
                
                int temp=arr[i][1];
                int temp_index=arr[i][0];
                arr[i][1]=arr[j][1];
                arr[i][0]=arr[j][0];
                arr[j][1]=temp;
                arr[j][0]=temp_index;
            }
        }
    }

    
    for (int x=0;x<n;x++){
        ans+=arr[x][1]*x+1;
    }
    cout<<ans<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i][0]<<" ";

}
