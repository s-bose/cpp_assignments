#include "interest/interest.ih"

int main(int argc, char **argv)
{
    for (size_t year = 0; year < stoul(argv[1]); ++year)
    {
        cout << "At year " << year << ": amount = " << interest_calc(year, stod(argv[2]), stoul(argv[3])) << '\n';
    } 
}