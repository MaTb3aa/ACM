double AreaOfTri (ll x1,ll y1,ll x2,ll y2,ll x3,ll y3){
	double area=((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)))/2.0;
	return (area>0) ? area : -area;
}