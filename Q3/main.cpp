
#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"

using std::cout;
using std::endl;

int main(){
	square sqr(12, 2, 2 );
	sphere sph( 5, 1.5, 4.5 );
	cube cub( 2.2 );
	circle cir( 3.5, 6, 9 );
	Shape *ptr[ 4 ] = { &cir, &sqr, &sph, &cub };
	for ( int x = 0; x < 4; ++x ){
		cout << *( ptr[ x ] ) << '\n';
	}

	return 0;
}