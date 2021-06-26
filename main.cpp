#include <iostream>
#include <vector>
#include "hisogram.h"
#include "svg.h"

using namespace std;


int
main()
{


    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;

    const auto numbers = input_numbers(number_count);

    size_t bin_count;
    cerr << "Enter column count: ";
    cin >> bin_count;

    const auto bins = make_histogram(bin_count, numbers );

    show_histogram_svg(bins);

    return 0;
}
