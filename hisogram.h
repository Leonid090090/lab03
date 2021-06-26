#ifndef HISOGRAM_H_INCLUDED
#define HISOGRAM_H_INCLUDED
#include <vector>

using namespace std;

void find_minmax(const vector<double> numbers, double& min, double& max);
struct Input {
    vector<double> numbers;
    size_t bin_count;
};

void
show_histogram_text(const vector<size_t>& bins);

vector<size_t> make_histogram(size_t bin_count, vector<double> numbers );





#endif // HISOGRAM_H_INCLUDED
