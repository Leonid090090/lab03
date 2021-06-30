#include <iostream>
#include <vector>
#include "hisogram.h"
#include "svg.h"

using namespace std;

Input
read_input(istream& in)
{
    Input data;
    cerr << "Enter number count: ";
    size_t number_count;
    in >> number_count;

    cerr << "Enter numbers: ";
    data.numbers = input_numbers(in, number_count);

    cerr << "Enter column count: ";
    in >> data.bin_count;


    return data;
}

int
main()
{
    Input data = read_input(cin);

    const auto bins = make_histogram( data.bin_count, data.numbers);
    show_histogram_svg(bins);
    return 0;
}
