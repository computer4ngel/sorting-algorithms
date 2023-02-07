#include "sorting.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

void selectionSort(std::vector<int> sortThis, int nodes) {

int min;

	for(int x=0; x<nodes; x++) {
	
		sortThis.at(x) = x;
		std::cout << sortThis.at(x) << " ";

	}

	for(int i=0; i<nodes; i++) {

		min = i;
		for(int j=i+1; j<nodes; j++) {

			if(sortThis.at(j) < sortThis.at(min)) {

				std::swap (sortThis.at(i), sortThis.at(min));

			}

		}

	}
	
	std::cout << "\n";
	std::cout << "Sorted: ";

	for(int y=0; y<nodes; y++) {

		sortThis.at(y) = y;
		std::cout << sortThis.at(y) << " ";

	}

}

void bubbleSort(std::vector<int>, char nodes) {



}

void insertionSort(std::vector<int>, char nodes) {



}
