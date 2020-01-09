//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#include <string>
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 1e7+2 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f,mod=1e9+7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dxx[] = { -1, 1,-1, 1,-2,-2,2, 2 };
int dyy[] = { -2, -2, 2, 2,1,-1,1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first

ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y);}
ll lcm(ll x, ll y) { return ((x*y) / gcd(x, y)); }

void file() {
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}



struct Point
{
    int x;
    int y;
};


bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}
int orientation(Point p, Point q, Point r)
{
    // See https://www.geeksforgeeks.org/orientation-3-ordered-points/
    // for details of below formula.
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}


bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;

    // p1, q1 and q2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases
}

int main() {
	file();


	struct Point p1 = {1, 1}, q1 = {10, 1};
	    struct Point p2 = {1, 2}, q2 = {10, 2};

	    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";

	    p1 = {1, 1}, q1 = {6, 6};
	    p2 = {6,2}, q2 = {3, 5};
	    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";

	    p1 = {2, 3}, q1 = {5, 6};
	    p2 = {5, 2}, q2 = {7, 5};
	    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";


	return 0;
}
