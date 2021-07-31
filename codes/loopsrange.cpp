#include <iostream>

using namespace std;

int main( int argc, char **argv  ){
	string str_array[] = {"uva","mamao","banana","laranja"};
	for(auto i: str_array){
		cout << i <<endl;
	}
	return 0;
}
