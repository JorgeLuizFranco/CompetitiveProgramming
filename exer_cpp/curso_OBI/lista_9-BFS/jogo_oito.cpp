#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define ctoi(x) (x-'0')
#define all(x) x.begin(),x.end()
#define itoc(x) (x+'0')
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define pii pair<int,int>
#define triple tuple<string,int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

string x;

string monta(string s,int x, int idx){
    swap(s[x],s[idx]);
    return s;
}

void print(string rangel){
    int cont=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< rangel[cont++];
        }
        cout<< '\n';
    }
}

void print_path(unordered_map<string,string> m, string fim){
    string state=fim;
    vector<string> ans;
    while(state!= "rangelino"){
        ans.pb(state);
        state=m[state];
    }
    reverse(all(ans));
    for(int i=1; i<sz(ans); i++){
        print(ans[i]);
        if(i!=sz(ans)-1)
            cout<<'\n';
    }
}

void bfs(string s, int ini, string fim){
    //print(s);cout<<endl;
    unordered_map<string,string> visited,parent;
    visited[s]="rangelino";
    queue<triple> q;
    q.push({s,ini,0});
    while (!q.empty())
    {
        auto[no,idx,cont]=q.front();q.pop();
        //cout<< "entre\n"; print(no); cout<<' '<<idx<<' '<<cont<<" boraaa\n";
        if(no==fim){
            cout<< "Quantidade minima de passos = "<<+cont<<'\n';
            print_path(visited,fim);
            return;
        }
        if(idx-3>=0){
            string s1= monta(no,idx-3,idx);    
            //print(s1); return -1;
            if(!visited.count(s1)){            
                q.push({s1,idx-3,cont+1});
                visited[s1]=no;
            }
        }
        if(idx+3<9){
            string s1= monta(no,idx+3,idx);
            if(!visited.count(s1)){
                q.push({s1,idx+3,cont+1});
                visited[s1]=no;
            }
        }
        if(idx+1<9 and (idx)%3!=2){
            string s1= monta(no,idx+1,idx);
            if(!visited.count(s1)){
                q.push({s1,idx+1,cont+1});
                visited[s1]=no;
            }
        }
        if(idx-1>=0 and (idx)%3!=0){
            string s1= monta(no,idx-1,idx);
            if(!visited.count(s1)){
                q.push({s1,idx-1,cont+1});
                visited[s1]=no;
            }
        }
    }
    cout<< "Problema sem solucao\n";
}

int main(){
    while(cin>>x){
        string s;
        int ini=-1;
        s+=x;
        for(int i=0; i<2; i++){
            cin>>x;
            s+=x;
        }
        for(int i=0; i<9; i++){
            if(s[i]=='0'){
                ini=i;
            }
        }
        //print(s); cout<<endl;
        //cout<<ini<<endl;
        if(ini!=-1){
            bfs(s,ini,"123456780");
            cout<<'\n';
        }
    }
    return 0;
}

/*1 2 3
4 5 6
7 8 0*/