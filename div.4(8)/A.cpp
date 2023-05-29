#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,max = 0,min = 0,middle= 0,t;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
            if(a > b && a > c){
                max = a;
            }else if(a < b && c < b){
                max = b;
            }else{
                max = c;
            }

            if(a < b && a < c){
                min = a;
            }else if(a > b && c > b){
                min = b;
            }else{
                min = c;
            }

            
            if(max == a && min == b){
                cout<<c<<endl;
            }else if(max == b && min == a){
                cout<<c<<endl;
            }else if(max == c && min == b){
                cout<<a<<endl;
            }else if(max == b && min == c){
                cout<<a<<endl;
            }else if(max == a && min == c){
                cout<<b<<endl;
            }else if(max == c && min == a){
                cout<<b<<endl;
            }
            //cout<<min<<" "<<max<<endl;
    }

    
  return 0;
}