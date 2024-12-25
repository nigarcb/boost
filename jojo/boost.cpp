/*#include <boost/circular_buffer.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using boost::circular_buffer;
template <typename T>
void printBuffer (circular_buffer<T> cbuf) {
    for (const auto& item: cbuf )
        std::cout <<item<<";";
    std::cout<<"\n";
}
int main() {
    circular_buffer<int> cb(10);
    for(int i=0;i!=10; ++i)
        cb.push_back(i);
    printBuffer(cb);
    std::cout<<"cb.back; "<<cb.back()<<"\n";
    std::cout<<"cb.front; "<<cb.front()<<"\n";
    for(int i=0; i!=5; ++i )
        cb.push_front(i);
    printBuffer(cb);
    std::cout<<"cb.back; "<<cb.back()<<"\n";
    std::cout<<"cb.front; "<<cb.front()<<"\n";

    cb.pop_back();
    printBuffer(cb);
    cb.pop_front();
    printBuffer(cb);
}
*/

#include <boost/algorithm//string.hpp>
#include <iostream>
int main() {
    std::string input="Msu\t Baku\tLab";
    std::vector<std::string> result;
    boost::split(result,input, boost::is_any_of("\t"));
    for(const auto item:result) {
        std::cout<<item<<"\n";
    }
    return 0;
}