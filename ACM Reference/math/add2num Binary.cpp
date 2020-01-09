string pluss(string a, string b){
	string ans = ""; 
	int ok = 0;          
	while ( a.size() || b.size() || ok==1 ){
		ok += ((a.size()) ? a.back() - '0' : 0);
		ok += ((b.size()) ? b.back() - '0' : 0);
		ans = char(ok % 2 + '0') + ans; ok >>=1;
		if(a.size())a.pop_back();
		if(b.size())b.pop_back();
	}
	return ans;
}