#include <iostream>
#include <functional>
#include <print>

// Needs C++14 for std::plus<void> so compile with e.g.
// g++ --std=c++14 hello_world.cpp -o ./hello.out

template<typename T, typename U>
auto simple_plus(T lhs, U rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}

auto main() -> int {
    std::println("Hello, world!");
    std::plus<int> adder;
    std::println("{}",adder(1, 1.23));
    std::println("{}",std::plus<>{}(1, 1.23));
    std::println("{}",simple_plus(1, 1.23));

}
