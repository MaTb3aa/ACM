#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<unordered_map>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define endl                         '\n'	
#define Ceil(x,y)             ((x+y-1)/y)
#define sz(s)               (int)s.size()
#define RT(x)           return cout<<x,0;
#define mem(x,y)    memset(x,y,sizeof(x))
#define all(v) ((v).begin()), ((v).end())
#define vi                    vector<int>
#define pii                 pair<int,int>
#define watch(x) cout<<(#x)<<" = "<<x<<endl
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = acos(-1), EPS = 1e-7;
const int OO = 0x3f3f3f3f, N = 1e7 + 5, mod = 1e9 + 7;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
 
 
 
 
void print(int n) {
	if (!n)return;
	print(n>>1);
	cout << (n & 1);
}
int main() {
	file();
	//// Why usinig betmask 
	///*
	//	1- best time 
	//	2- best memory 
	//	3- small code ^^
	//*/
 
 
	///*
	//
	//
	//	Given a set of numbers where all elements occur
	//	even number of times except one number, 
	//	find the odd occurring number
	//
	//
	//*/
 
 
 
	///*
	//A 	B 	!A 	A&B 	A|B 	A^B
	//0	0	1	0		0		0
	//0	1	1	0		1		1
	//1	0	0	0		1		1
	//1	1	0	1		1		0
 
	//	X = 1152 = 	10010000000
	//	Y = 1428 = 	10110010100
 
	//	X & Y 	 = 	10010000000
	//	X | Y 	 = 	10110010100
	//	X ^ Y 	 = 	00100010100
 
	//	A ^ B ^ C ^ D = E	For any bit in E with 1, must be ODD number of 1s
	//	X ^ 0 = X		X ^ X = 0
	//	(A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E
 
	//	X >> 1	 = 	1001000000 			Equals X/2
	//	X >> 2	 = 	100100000 			Equals X/4
	//	X << 1	 =  100100000000		Equals X*2
	//	X << 2	 =  1001000000000		Equals X*4
	//*/
 
 
 
 
 
 
	///*
	//	if(n%2==1) not even but it's fail because negative ^^ 
	//	Detect Even OR ODD
	//	x = 1000   -> 8
	//	x = 0111   -> 7
 
	//	(x&1) == 1  Odd 
	//	!(x&1) == 1    Even
 
	//	
	//*/
 
 
 
 
 
 
 
 
	//// print mask
	//int n = 27; //11011
	//while (n){
	//	cout << (n & 1 ? 1 : 0); // but it reversed ^^ 
	//	n >>= 1;
	//}
	//cout << endl;
 
 
 
 
	//// count bits 
	//n = 27; //110001
	//int cnt = 0;
	//while (n){
	//	if (n&1)cnt++;
	//	n >>= 1;
	//}
	//cout << cnt << endl;
 
 
 
 
 
	//n = 49;
	////git bit n=49
	//// find the 3 bit int mask             give it (idx -1) ;
	//		   	//idx		
	//cout << (((n >> 2) & 1) == 1) << endl;
	//
	//// set bit  n = 8  -> 1000
	//// set bit idx 3 with 1       idx -1 
	//n = 8;
	//cout << (n | (1 << 2)) << endl;
 
	//// set bit 0
	//n = 27; // idx 2
	//cout << (n & ~(1 << 1)) << endl;
 
	////flip bit 
	//n = 27;
	//cout << (n ^ (1 << 2)) << endl;
 
	///*
	//// remove last bit 
	//n = 840;     //01101001000
	//n - 1 = 439; //01101000111
	//	cout(x & (x-1))  // remove the last right bit 
	//*/
 
 
 
 
 
	///*
	//	Given a positive integer, find if it is a power of two or not ^^.
	//
	//*/
 
 
 
 
 
 
 
	/*
	int n = 8;
	cout << (n & (n - 1) ? "No\n" : "Yes");
	*/
 
 
 
	//// how to count num of bits faster 
	//n = 100; cnt = 0;
	//while (n){                         //O(??)
	//	n &= (n - 1); cnt++;
	//}
	//cout << cnt << endl;
 
 
 
 
	/*
		Generate all subset of N numbers.
	*/
 
 
 
 
 
	////idx = 3 000 001 010 011 100 101  110 111
	//// how to print it all ?!
 
 
 
 
	//n = 3;
	//for(int i = 0; i < (1 << n); i++) {
	//	print(i); cout << endl;
	//}
 
	/*
	int n = 3;
 
	for (int mask = 0; mask < (1 << n); mask++) {
		int curstate = mask;
		for (int j = 0; j < n; j++) {
			if (curstate & 1) {
				//take it
			}
			curstate >>= 1;
		}	
	}
 
	*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	/*
 
 
		Count all subset that have numbers of even greater 
		that numbers of odds.
 
 
 
 
 
 
	int n = 10;
	int arr[] = { 1,7,5,3,17,15,9,2,8,30 };
	int ans = 0;
	for (int i = 0; i < (1 << n); i++) {
		int cur = i, odd = 0, ev = 0;;
		for (int j = 0; j < n; j++) {
			if (cur & 1) {
				if (arr[j] & 1)odd++;
				else ev++;
			}
			cur >>= 1;
		}
		if (ev > odd)ans++;
	}
	cout << ans << endl;
 
 
	*/
 
 
 
 
 
 
	///*
	//Be careful with precedence
	//	x & 5 == 1  ->   & & (5 == 1)
	//	1 << 10 -1  ->   1 << 9
 
	//	1 << 60   -> overflow (32)   ->   1LL << 60
 //	
	//*/
 
 
 
 
	//
	////	bitset
	//int x = 17;
	//bitset<8>bt(x); //  00010001
	//bt.set();       //  11111111
	//bt.flip();      //  00000000
	//bt = 9;			//  00001001
	//bt |= 5;		//  00001101
	//bt <<= 3;		//  01101000
	//bt = ~bt;		//  10010111
	//bt.set(2, 0);   //  10010011
	//bt.set(6);      //  11010011
	//bt.flip(0);		//  11010010
	//bt.count();		// num of bits (1)
	//bt.any();       // true if any set is (1)
	//bt.none();      // true if no bit is one 
	//ll y = bt.to_ullong(); // 210
	//string s=bt.to_string();
	//bt[0] = 1;
	//cout << bt;
	//if (bt[0] == 0)cout << "ok\n";
	//
 
 
 
}