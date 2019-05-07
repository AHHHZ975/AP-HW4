#include <iostream>
#include <vector>
#include <list> 
#include <iterator> 

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main(){
	list<int> aList;
    int a[50];
    aList.assign(a, a + 50);
    // for(auto i = aList.begin(); itr1 != output.end(); ++itr1){
    //     cout<<" itr "<<(*itr1)<<endl;
    // } 
	return 0;
}