#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin >> a;
	while(a--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if (z>=x && z < y){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	    
	}
	return 0;
}
