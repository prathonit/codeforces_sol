#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int q;
    cin>>q;
    for (int i=0;i<q;i++){
        string s,t;
        bool same_char(false);
        cin>>s>>t;
        int n=s.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for (int j=0;j<n;j++){
            for (int k=0;k<n;k++){
               if (s[j]==t[k]){
                    same_char=true;
                    cout<<"YES"<<endl;
                    break;
               } 
            }
            if (same_char==true){
                break;
            }
        }
        if (same_char==false){
            cout<<"NO"<<endl;
        }
    }
}
