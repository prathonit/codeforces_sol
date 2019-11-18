#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    double n;
    cin>>n;
    double l,b;
    ll p;
    ll min=pow(10,6);
    for (l=1;l<=n;l++){
        b=n/l;
        //taking b and l as double data type to check if they are integers 
        if ((b-int(b)==0)){
            p=2*(l+b);
            if (p<min){
                min=p;
            }
        }
    }
    cout<<min;
 
}