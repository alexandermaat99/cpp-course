#include <array>    // For std::array
#include <cstdint>  // For fixed-width std::uint32_teger types
#include <iostream> // For std::cout


//c-style array decays to a pointer when passed into a function
void print_array_values1(const std::uint32_t my_array[], const std::uint32_t len)
{
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << my_array[i] << "\n";
    };
}

//cpp style approach
template <std::size_t N>
void print_array_values2(const std::array<std::uint32_t, N> &my_array)
{
    for (std::uint32_t i = 0; i < my_array.size(); i++)
    {
        std::cout << my_array[i] << "\n";
    };
}


int main()
{
    constexpr auto len = 5U;
    std::uint32_t my_array[len] = {}; // c-style
    print_array_values1(my_array, len);

    //cpp array
    auto my_array2 = std::array<std::uint32_t, len>{};
    print_array_values2(my_array2);


    return 0;
}
