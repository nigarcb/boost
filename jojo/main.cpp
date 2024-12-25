/*#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
/*int128_t boost_product(long long A,long long B) {
    int128_t ans=(int128_t) A*B;
    return ans;
}
int main() {
    long long first = 62948237684;
    long long second = 457289252565;
    std::cout<<"Product of "<< first << " and " << second << " is " <<boost_product(first,second);
    return 0;
}*/
/*cpp_int boost_factorial(int num) {
    cpp_int fact = 1;
    for(int i=num; i>1;--i)
        fact*=i;
    return fact;
}
int main() {
    int num=32;
    std::cout<<"factorial of "<<num<< " is " << boost_factorial(num);
    return 0;
}*/
/*#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

#include <iostream>
using  boost::multiprecision::cpp_dec_float_50;
template <typename T> inline T area_of_circle(T r) {
    using boost::math::constants::pi;
    return pi<T>()*r*r;
}
int main() {
    float rad_f =123.0/100;
    float area_f= area_of_circle(rad_f);
    double rad_d = 123.0/100;
    double area_d= area_of_circle(rad_d);
    cpp_dec_float_50 rad_mp= 123.0/100;
    cpp_dec_float_50 area_mp= area_of_circle(rad_mp);
    std::cout<< "Float: "<< std::setprecision(std::numeric_limits<float>::digits10)<< area_f<<"\n";
    std::cout<< "Double: "<< std::setprecision(std::numeric_limits<double>::digits10)<< area_d<<"\n";
    std::cout<< "Boost: "<< std::setprecision(std::numeric_limits<cpp_dec_float_50>::digits10)<< area_mp<<"\n";

}*/
