#include "sorting.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <cstdlib>
#include <stdlib.h>

void selectionSort(std::vector<int> sortThis, int nodes, char mode) {

int min;
int y = 0;
int n = 0;

//condition for ascending generation (also prints unsorted values)

	if(mode == 'a') {

		for(int x = 0; x<nodes; x++) {

			y++;
			sortThis.at(x) = y;
			std::cout << sortThis.at(x) << " ";

		}	

	}

//condition for descending generation (also prints unsorted values)
	
	else if(mode == 'b') {

	y = nodes+1;

		for(int x = 0; x<nodes; x++) {

			y--;
			sortThis.at(x) = y;
			std::cout << sortThis.at(x) << " ";

		}

	}

//condition for random generation (also prints unsorted values)

	else {

	srand(time(0));

		for(int x = 0; x<nodes; x++) {

			sortThis.at(x) = rand() % nodes;
			std::cout << sortThis.at(x) << " ";

		}

	}

int i,j,small,temp;

	for(i=0; i<nodes-1;i++) {

		small = i;

			for(j=i+1;j<nodes;j++) {

				if(sortThis.at(j) < sortThis.at(small)) {

					small = j;

				}

			}
		temp = sortThis.at(i);
		sortThis.at(i) = sortThis.at(small);
		sortThis.at(small) = temp;
	}

//print sorted vector

std::cout << "\n";
std::cout << "\n" << "Sorted: " << std::endl;
	for(int x = 0; x<nodes; x++) {

		std::cout << sortThis.at(x) << " ";

	}	

}




void bubbleSort(std::vector<int>, int nodes, char mode) {



}

void insertionSort(std::vector<int>, int nodes, char mode) {



}
