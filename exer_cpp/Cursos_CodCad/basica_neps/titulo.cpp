#include <bits/stdc++.h>

using namespace std;

string title(string s){
    s+= ' ';
    vector<string> title;
    string palavra,res;
    for(int i=0 ;i<s.size();i++){
        palavra+=s[i];
        if(s[i]==' '){
            if(palavra[0]>= 'a' && palavra[0]<='z'){
                palavra[0]+='A'-'a';
            }
            title.push_back(palavra);          
            palavra.clear();
        }
    }
    for(string word : title){
        int i=1;
        while(word[i]!=' '){
            if(word[i]>='A' && word[i]<='Z'){
                word[i]+='a'-'A';
            }
            i++;
        }
        res+=word;
    }
    return res;
}

int main(){
    string F;

	getline(cin, F);
	cout << title(F) << "\n";
}