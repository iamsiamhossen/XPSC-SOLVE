#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int left=1;
        int right=1;
        for(int i=0;i<4;i++){
            if(s[i]=='1' and i<2) {left+=10;}
            if(s[i]=='1' and i>=2) {right+=10;}
        }
        cout<<left*right<<endl;
    }
}
