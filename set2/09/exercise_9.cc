#include <iostream>

int main(int argc, char **argv) 
{
        // get the first argument as integer
    int num = atoi(argv[1]);
                                
        // iter loops over 1 to 10
    for (int iter = 1; iter <= 10; ++iter)
    {                   
        // iter * num = (iter * num) is printed        
        std::cout << iter << " * " << num << " = " << num * iter << '\n';
    }
}