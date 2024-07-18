void solve() {
    string s; cin>>s;
    map<char,int>mp;
    for(int i = 0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(auto &it : mp){
        if(it.second >1){
            cout<<it.first<<endl;
        }
    }
}
