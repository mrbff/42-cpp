# include "PmergeMe.hpp"
# include <ctime>
# include <iomanip>

int main(int ac, char **av)
{
     
    std::clock_t start, end1, end2;
    double exec_time1, exec_time2;
//    std::clock_t end0;
//    double exec_time0;
    start = std::clock();
//////////////////////////////////////////////

    int *arr = new int [ac - 1];

    try {
        checkInput(arr, ac, av);
    }
    catch (...)
    {
        delete[] arr;
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
        std::cout << " " << av[i];
    std::cout << std::endl;

//    end0 = std::clock();
//    exec_time0 = (static_cast<double>(end0) - static_cast<double>(start)) / CLOCKS_PER_SEC;


//////////////////////////////////////////////////////////////////////
    std::vector<int> vec(arr, arr + ac - 1);
    mergeInsertionSort< std::vector<int> >(vec, 0, ac - 2, THRESHOLD);
    end1 = std::clock();
    
    std::deque<int> dq(arr, arr + ac - 1);
    mergeInsertionSort< std::deque<int> >(dq, 0, ac - 2,  THRESHOLD);
    end2 = std::clock();
//////////////////////////////////////////////////////////////////////    


    exec_time1 = (static_cast<double>(end1) - static_cast<double>(start)) / CLOCKS_PER_SEC;
    exec_time2 = ((static_cast<double>(end2) - static_cast<double>(start)) / CLOCKS_PER_SEC) - exec_time1;

    std::cout << "After: ";
    for (int i = 0; i < ac - 1; i++)
        std::cout << " " << vec[i];
    std::cout << std::endl;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << exec_time1 << " us" << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << exec_time2 << " us" << std::endl;
    
    delete[] arr;

    return 0; 
}