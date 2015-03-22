#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <complex>

using namespace std;

// Program configurations
#define INFILE "A-large-practice.in"
#define OUTFILE "A-large-practice.out"

// Shorthands
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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
#define normalize(v) ((v)/length(v))
#define rotate(p,about,theta) ((p-about)*exp(point(0,theta))+about)
#define pointEqu(a,b) (comp(a.X,b.X)==0 && comp(a.Y,b.Y)==0)

typedef stringstream StrStream;
typedef pair<int, int> PairIntInt;
typedef vector<PairIntInt> VectPairIntInt;
typedef vector<string> VectStr;
typedef vector<int> VectInt;
typedef vector<double> VectDbl;
typedef vector<vector<int> > VectVectI;
typedef long long LongLong;
typedef long double LongDbl;
typedef complex<double> Point;
typedef pair<Point, Point> Segment;
typedef pair<double, Point> Circle;
typedef vector<Point> Polygon;

const int oo = (int) 1e9;
const double PI = 2 * acos(0);
const double eps = 1e-9;

int main() {
	const std::string infile = INFILE;
	std::string outfile = OUTFILE;
		
	std::freopen(infile.c_str(), "rt", stdin);
	std::freopen(outfile.c_str(), "wt", stdout);
	
	int caseCount, storeCredit, itemsCount;
	VectInt prices;
	
	// Get number of test cases
	std::cin >> caseCount;
	// Get data for each test case
	repInit(caseIdx, 1, caseCount) {
		// Get store credit and number of items
		std::cin >> storeCredit >> itemsCount;
		std::cout << "Case #" << caseIdx << ": ";
		prices.resize(itemsCount);
		// Get prices
		rep(itemIdx, itemsCount) {
			std::cin >> prices[itemIdx];
			rep(findIdx, itemIdx) {
				if (prices[itemIdx] + prices[findIdx] == storeCredit) {
					cout << findIdx+1 << " " << itemIdx+1 << endl;
				}
			}
		}
	}
	
	return 0;
}
