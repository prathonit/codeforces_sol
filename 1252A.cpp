#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,b,p;
    int min=pow(10,5);
    for (int l=1;l<n;l++){
        b=n/l;
        if ((b-int(b)==0)){
            p=2*(l+b);
            if (p<min){
                min=p;
            }
        }
    }
    cout<<min;
}
