#include "headers/move.h"
#include "headers/zeros.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector< vector <float> > move(int dy, int dx, 
	vector < vector <float> > &beliefs) 
{
	static unsigned int height=beliefs.size(), width=beliefs[0].size();

	vector < vector <float> > newGrid(height,vector<float>(width,0.0));
  
  	// OPTIMIZATION: Use improved zeros function

// OPTIMIZATION: Eliminate any variables that aren't needed
	vector <float> row, newRow;
	unsigned int i, j, new_i, new_j;
	
  	for (i=0; i<height; i++) {
		for (j=0; j<width; j++) {
			new_i = (i + dy + height) % height;
			new_j = (j + dx + width)  % width;

			newGrid[new_i][new_j] = beliefs[i][j];
		}
	}
	return newGrid;
}
