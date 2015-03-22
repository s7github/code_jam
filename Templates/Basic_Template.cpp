#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <algorithm>
#include <iterator>

using namespace std;

/*****************************************************
* Configurations
* Problem Category: A, B or C
* Problem Size: "small" or "large"
******************************************************/
#define PROB_CAT "B"
#define PROB_SIZE "small"

// Shorthands
#define push push_back
#define all(V) V.begin(),V.end()
#define rall(V) V.rbegin(),V.rend()
#define sz size()
#define rep(i,m) for(int i=0;i<(int)(m);i++)
#define repStep(i,m,s) for(int i=0;i<(int)(m);i=i+s)
#define repInit(i,n,m) for(int i=n;i<(int)(m);i++)
#define repInitStep(i,n,m,s) for(int i=n;i<(int)(m);i=i+s)
#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define dot(a,b) ((conj(a)*(b)).X)
#define X real()
#define Y imag()
#define length(V) (hypot((V).X,(V).Y))
#define vect(a,b) ((b)-(a))
#define cross(a,b) ((conj(a)*(b)).imag())
#define normalize(V) ((V)/length(V))
#define rotate(p,about,theta) ((p-about)*exp(point(0,theta))+about)
#define pointEqu(a,b) (comp(a.X,b.X)==0 && comp(a.Y,b.Y)==0)
#define printVect(V) std::copy(V.begin(), V.end(), std::ostream_iterator<string>(std::cout, " "))

#define INFILE PROB_CAT "-" PROB_SIZE "-practice.in"
#define OUTFILE PROB_CAT "-" PROB_SIZE "-practice.out"

typedef std::istringstream InStream;
typedef std::ostringstream OutStream;
typedef std::pair<int, int> PairIntInt;
typedef std::vector<PairIntInt> VectPairIntInt;
typedef std::vector<string> VectStr;
typedef std::vector<int> VectInt;
typedef std::vector<double> VectDbl;
typedef std::vector<vector<int> > VectVectI;
typedef long long LongLong;
typedef long double LongDbl;
typedef std::complex<double> Point;
typedef std::pair<Point, Point> Segment;
typedef std::pair<double, Point> Circle;
typedef std::vector<Point> Polygon;

const int oo = (int) 1e9;
const double PI = 2 * acos(0);
const double eps = 1e-9;

int main() {
	// File operations
	const std::string infile = INFILE;
	const std::string outfile = OUTFILE;
	std::freopen(infile.c_str(), "rt", stdin);
	std::freopen(outfile.c_str(), "wt", stdout);
	
	// Standard variables
	int caseCount;
	string newline, txtline;
	
	/************ Solution starts from here ***************/	
	// Program variables
	
	// Get number of test cases
	std::cin >> caseCount;	// DO NOT CHANGE
	std::getline(cin, txtline);
	// Get data for each test case
	repInit(caseIdx, 1, caseCount + 1) {
		std::cout << "Case #" << caseIdx << ": ";	// DO NOT CHANGE
		
		// Code here...
		
		cout << endl;
	}
	
	return 0;
}
