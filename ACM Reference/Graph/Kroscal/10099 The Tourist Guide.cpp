/***  بسم الله الرحمن الرحيم ***/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> parent;

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        parent[b] = a;
    }
}
struct Edge {
    int u, v, w;
    bool operator<(Edge const& other) {
        return w > other.w;
    }
};

int main(){
		int n,m,t=1;
		while(scanf("%d %d",&n,&m)){
			if(!n && !m)break;
			vector<Edge> v(m);
			for (int i = 0; i < m; i++) {
					scanf("%d %d %d",&v[i].u,&v[i].v,&v[i].w );
			}
			parent = std::vector<int> (n+1);
			for (int i = 0; i <= n; i++)parent[i]=(i);

			sort(v.begin(), v.end());
			int mx=1e9;
			int src,des,people;
			scanf("%d %d %d",&src,&des,&people);
			for (Edge e : v) {
			    if (find_set(e.u) != find_set(e.v)) {
			        mx=min(mx,e.w);
			        union_sets(e.u, e.v);
							if(find_set(src) == find_set(des))break;
			    }
			}
			int ans=(people/(mx-1));
			ans+=(people%(mx-1)!=0);
			printf("Scenario #%d\n",t++);
			printf("Minimum Number of Trips = %d\n\n",ans);
	}
	return 0;
}
