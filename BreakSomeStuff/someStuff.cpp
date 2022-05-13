
#include "../Common/include/complexify.h"

typedef cplx su2double;

int main( int argc, char * argv[] ){
	su2double wallDistanceInt[18];
	for ( int i = 0; i < 18; i++ ){
		wallDistanceInt[i] = i;
	}


	for ( int i = 0; i < 18; i++ ){
		/*
		su2double wallDist;
		if (wallDistanceInt){
			wallDist = wallDistanceInt[i];
		}
		else {
			wallDist = 0.0;
		} */

		su2double wallDist = wallDistanceInt ? wallDistanceInt[i] : 0.0;
	}

	return 0;
}
