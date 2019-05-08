#include <iostream>
#include <vector>
#include <list> 
#include <iterator> 
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int generateRandomNumber(){     
    return rand() % 50; 
} 

int main(){	
	srand(time(NULL));
	list<int> aList;
    list<int> b(50);
    list<int> c(50);            
    int a[50]{};    
 	std::ostream_iterator<int> out_it (std::cout," ");
	vector<int>::iterator it;
 	///////////////////////////////////////////////////////// 	
    aList.assign(a, a + 50);    
    cout << "a is: " << endl;
  	std::copy(aList.begin(), aList.end(), out_it);
	cout << endl;
	//////////////////////////////////////////////////////////	
	std::generate(b.begin(), b.end(), generateRandomNumber);
 	cout << "The random generated array is: " << endl;
  	std::copy(b.begin(), b.end(), out_it);
	cout << endl;
	b.sort();
 	b.unique();
	cout << "The unique random generated array is: " << endl;
  	std::copy(b.begin(), b.end(), out_it);
	cout << endl;
	//////////////////////////////////////////////////////////
	std::generate(c.begin(), c.end(), generateRandomNumber);
 	cout << "Another random generated array is: " << endl;
  	std::copy(c.begin(), c.end(), out_it);
	cout << endl;
	c.sort();
 	c.unique();
	cout << "The unique random generated array is: " << endl;
  	std::copy(c.begin(), c.end(), out_it);
	cout << endl;
	//cout << c^2 - b^2 << endl;
	//transform(b.begin(), b.end(), b.begin(), sqrt );
	transform(b.begin(), b.end(), b.begin(), b.begin(), std::multiplies<int>());
	transform(c.begin(), c.end(), c.begin(), c.begin(), std::multiplies<int>());
	if(c.size() < b.size()){
		c.insert(c.end(), b.size() - c.size(), 0);
	}
	else if(b.size() < c.size()){
		b.insert(b.end(), c.size() - b.size(), 0);	
	}
	int results[c.size()];
	transform(c.begin(), c.end(), b.begin(), results, std::minus<int>()); 	
  	cout << "The minus result is: " << endl;
  	std::copy(results, results + c.size(), out_it);
	cout << endl;
	return 0;
}