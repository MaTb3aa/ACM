vector<long long> f(100005,0);
		for(int i=1; i<100005; i++){
	        f[i]=2*f[i-1]+1;
	        f[i]%=MOD;
		}
		for(int i=1; i<30; i++)cout<<f[i]<<" ";

