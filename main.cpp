#include <iostream>
#include <vector>
#include "hisogram.h"
#include "svg.h"
#include <curl/curl.h>

using namespace std;

Input
read_input(istream& in, bool prompt)
{
    Input data;
if (prompt){
    cerr << "Enter number count: ";
    size_t number_count;
    in >> number_count;

    cerr << "Enter numbers: ";
    data.numbers = input_numbers(in, number_count);

    cerr << "Enter column count: ";
    in >> data.bin_count;
}
else {
    size_t number_count;
    in >> number_count;
    data.numbers = input_numbers(in, number_count);
    in >> data.bin_count;
}

    return data;
}

int
main()
{
    curl_global_init(CURL_GLOBAL_ALL);
    const auto input = read_input(cin, true);
    const auto bins = make_histogram(input);
    show_histogram_svg(bins);
    return 0;
}
