// CPP Program to multiply two matrix using pthreads 
#include <bits/stdc++.h> 
using namespace std; 
using namespace chrono;
// maximum size of matrix 
#define MAX 1000


int matA[MAX][MAX]; 
int matB[MAX][MAX]; 
int matC[MAX][MAX]; 
int step_i = 0; 

void* multi(void* arg) 
{ 
	for (int i = 0; i <  MAX ; i++)  
		for (int j = 0; j < MAX; j++) 
			for (int k = 0; k < MAX; k++) 
				matC[i][j] += matA[i][k] * matB[k][j]; 
} 

// Driver Code 
int main() 
{ 
	// Generating random values in matA and matB 
	for (int i = 0; i < MAX; i++) { 
		for (int j = 0; j < MAX; j++) { 
			matA[i][j] = rand() % 10; 
			matB[i][j] = rand() % 10; 
		} 
	} 

	// Displaying matA 
	//cout << endl 
	//	<< "Matrix A" << endl; 
	//for (int i = 0; i < MAX; i++) { 
	//	for (int j = 0; j < MAX; j++) 
	//		cout << matA[i][j] << " "; 
	//	cout << endl; 
	//} 

	// Displaying matB 
	//cout << endl 
	//	<< "Matrix B" << endl; 
	//for (int i = 0; i < MAX; i++) { 
	//	for (int j = 0; j < MAX; j++) 
	//		cout << matB[i][j] << " ";		 
	//	cout << endl; 
	//} 

	auto a = high_resolution_clock::now();	
	int* p;
	multi((void*)(p));

	// Displaying the result matrix 
	//cout << endl 
	//	<< "Multiplication of A and B" << endl; 
	//for (int i = 0; i < MAX; i++) { 
	//	for (int j = 0; j < MAX; j++) 
	//		cout << matC[i][j] << " " ;		 
	//	cout << endl; 
	//}
 
	auto b = high_resolution_clock::now();
	cout << "Took " << duration_cast<milliseconds>(b - a).count() << " milliseconds" <<  endl;
	return 0; 
} 

