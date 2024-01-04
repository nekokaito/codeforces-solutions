#include<iostream>
#include<cstdio>
using namespace std;

const int N=100100;
int T,n,q,s[N],owner[N],pen_count[N];

int find(int x){
    if(owner[x]==x) return x;
    return owner[x]=find(owner[x]);
}

int main(){
     
    cin.tie(0),cout.tie(0),ios::sync_with_stdio(false);
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>s[i];
        for(int i=1;i<=n;i++){
            owner[i]=i;
            pen_count[i]=1;
        }
        cin>>q;
        while(q--){
            int type,x,y;
            cin>>type>>x;
            if(type==1){
                cin>>y;
                int px=find(x),py=find(y);
                if(px==py) continue;
                if(s[px]>s[py]){
                    owner[py]=px;
                    s[px]+=s[py];
                    pen_count[px]+=pen_count[py];
                }
                else{
                    owner[px]=py;
                    s[py]+=s[px];
                    pen_count[py]+=pen_count[px];
                }
            }
            else if(type==2){
                int px=find(x);
                cout<<pen_count[px]<<endl;
            }
            else{
                int k;
                cin>>k;
                int px=x;
                while(k>pen_count[px]){
                    k-=pen_count[px];
                    px=owner[px];
                }
                cout<<px<<endl;
            }
        }
    }
    return 0;
}
