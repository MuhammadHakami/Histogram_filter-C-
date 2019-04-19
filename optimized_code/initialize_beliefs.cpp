#include "headers/initialize_beliefs.h"
#include<iostream>
using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > &grid) {
	static unsigned int rows=grid.size();
	static unsigned int cols=grid[0].size();
	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
  	static float prob_per_cell = 1.0 / ( rows * cols) ;
	static vector < vector<float> > newGrid(rows,vector<float>(cols,1.0 / ( rows * cols)));
	return newGrid;
}