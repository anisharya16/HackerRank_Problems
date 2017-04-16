#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> v;
    int n;
    std::cin >> n;
    
    std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_insert_iterator<std::vector<int>>(v));
    std::sort(v.begin(), v.end());
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    
    return 0;
}