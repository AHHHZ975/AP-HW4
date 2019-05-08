#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>
#include <set>
#include <iterator>


using std::cout;
using std::endl;
using std::vector;
 
 bool isNegative (int i) {
  return i < 0;
}

int main(){
	vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};	
	/////////////////// Print original vector /////////////
    cout << "Original vector : "; 
    for(size_t i{}; i != vec.size(); i++){    	
        cout << " " << vec.at(i); 
    }
    cout << endl;
 //    ////////////////// After remove ///////////////////
	// vector<int>::iterator afterRemove; 	
 //    afterRemove = std::remove(vec.begin(), vec.end(),2);           
 //    cout << "After remove : "; 
 //    for (auto p = vec.begin(); p != afterRemove; p++){
 //    	cout << " " << *p; 
 //    }         
 //    cout << endl;
    //////////////////////////////////////////////////////
    // vec.erase(std::remove(vec.begin(), vec.end(), 2), vec.end());    
    // cout << "After remove : "; 
    // for(size_t i{}; i != vec.size(); i++){    	
    //     cout << " " << vec.at(i); 
    // }
    // cout << endl;
    ///////////////////////////////////////////////
    // std::for_each(vec.begin(), vec.end(), [](int& d) { d*=2.0;});
    // cout << "Duplicated vector: ";
    // std::ostream_iterator<int> out_it (std::cout," ");
    // std::copy (vec.begin(), vec.end(), out_it ); 
    // cout << endl;
    //////////////////////////////////////////////////
    // transform(vec.begin(), vec.end(), vec.begin(),std::bind2nd(std::multiplies<int>(), 2));          
    // std::ostream_iterator<int> out_it (std::cout," ");
    // std::copy (vec.begin(), vec.end(), out_it ); 
    // cout << endl;       
    ///////////////////////////////    
    // vector<double> tempVec{1, 2, 3, 4, 5, 4, 3, 2, 1};    
    // double average = std::accumulate( vec.begin(), vec.end(), 0.0)/vec.size();   
    // transform(tempVec.begin(), tempVec.end(), tempVec.begin(), std::bind2nd(std::plus<double>(), -average));
    // sort(tempVec.begin(), tempVec.end());
    // transform(tempVec.begin(), tempVec.end(), tempVec.begin(),std::bind2nd(std::plus<double>(), +average));
    // cout << "The sorted vector: ";
    // std::ostream_iterator<double> out_it (std::cout," ");
    // std::copy (tempVec.begin(), tempVec.end(), out_it );        
    // cout << endl;
    ///////////////////////////////////////////////////////////
    // sort(vec.begin(), vec.end());
    // vec.erase(unique(vec.begin(), vec.end()), vec.end() );
    // std::ostream_iterator<int> out_it (std::cout," ");
    // cout << "The Non-repetitive vector: ";
    // std::copy (vec.begin(), vec.end(), out_it );    
    // cout << endl;
    ////////////////////////////////////////////////////////
    // std::set<double> s(vec.begin(), vec.end());
    // std::set<double>::iterator it;
    // it = s.lower_bound(4);
    // s.erase(it, s.end());
    // cout << "Desired vector: ";
    // std::ostream_iterator<int> out_it (std::cout," ");
    // std::copy (s.begin(), s.end(), out_it );    
    // cout << endl;
	return 0;
}