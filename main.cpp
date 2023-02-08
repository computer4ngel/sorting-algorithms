#include "sorting.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>
#include <chrono>
#include <algorithm>

using namespace std::chrono;

int main() {

int a = 500;
int b = 1000;
int c = 5000;
int d = 10000;

std::vector<int> sorted1(a);
std::vector<int> sorted2(b);
std::vector<int> sorted3(c);
std::vector<int> sorted4(d);

std::vector<int> descending1(a);
std::vector<int> descending2(b);
std::vector<int> descending3(c);
std::vector<int> descending4(d);

std::vector<int> random1(a);
std::vector<int> random2(b);
std::vector<int> random3(c);
std::vector<int> random4(d);

//3rd variable a == ascending order
//3rd variable b == descending order
//3rd variable c == random order

//FORMAT TO START FUNCTION:
//selectionSort(vector(abcd int for size), abcd int for size, char a b c mode);

auto start = high_resolution_clock::now();
selectionSort(sorted1, a, 'a');
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);



std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

return 0;

}
