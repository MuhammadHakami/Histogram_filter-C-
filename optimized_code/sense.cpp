#include "headers/sense.h"

using namespace std;

// OPTIMIZATION: Pass larger variables by reference
vector< vector <float> > sense(char color, vector< vector <char> > &grid, vector< vector <float> > &beliefs,  float p_hit, float p_miss) 
{
	// OPTIMIZATION: Is the newGrid variable necessary?
  	// Could the beliefs input variable be updated directly?

	unsigned int i, j; 
	static unsigned int height=grid.size(), width=grid[0].size();

	for (i=0; i<height; i++) {
		for (j=0; j<width; j++) {
          	// OPTIMIZATION: Which of these variables are 					needed?
			if (grid[i][j] == color) {
				beliefs[i][j]*=  p_hit;
			}
            // OPTIMIZATION: if else statements might be 
          	// 	faster than two if statements
			else {
				beliefs[i][j]*= p_miss;
			}
		}
	}
	return beliefs;
}
