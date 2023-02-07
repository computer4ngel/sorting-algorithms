#include "sorting.h"
#include <iostream>
#include <fstream>
#include <vector>

void linearSort(std::vector<int> sortThis, int nodes) {

	for(int i = 0; i < nodes; i++) {
	sortThis.at(i) = i+1;
	std::cout << sortThis.at(i) << " ";
	}

}

void bubbleSort(int vector, char nodes) {



}

void insertionSort(int vector, char nodes) {



}
