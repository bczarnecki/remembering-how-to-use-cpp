#include <iostream>
#include <type_traits>
#include "TrainCar.h"

// Allows output of scoped enums
template<typename T>
std::ostream& operator<<(typename std::enable_if<std::is_enum<T>::value, std::ostream>::type& stream, const T& e)
{
    return stream << static_cast<typename std::underlying_type<T>::type>(e);
}

int main()
{
    TrainCar car1;
    TrainCar::ErrorStatus err_stat = car1.ActivateBrake();
    std::cout << err_stat << std::endl;
    return 0;
}
