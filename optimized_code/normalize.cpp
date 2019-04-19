#include "headers/normalize.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
vector< vector<float> > normalize(vector< vector <float> > &grid) {

  	// OPTIMIZATION: Avoid declaring and defining 				// intermediate variables that are not needed.
	float total = 0.0;
	unsigned int i,j;
	static unsigned rows=grid.size(),cols=grid[0].size();
	for (i = 0; i < rows; i++)
	{
		for (j=0; j< cols; j++)
		{
			total += grid[i][j];
		}
	}

	for (i = 0; i < rows; i++) {
		for (j=0; j< cols; j++) {
			grid[i][j]=grid[i][j]/total;
		}
	}
	return grid;
}
