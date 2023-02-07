#include "sorting.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>

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

linearSort(sorted1, a);

return 0;

}
