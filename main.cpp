#include <iostream>
#include <cstdint>
#include<string_view>

std::size_t iteration = 0;

std::size_t parse(std::string_view sv){
  ++iteration;
  if(sv.front() == '{') {
    std::cout << iteration << " " << sv << "\n";
    std::flush(std::cout);
    std::size_t idx = 0;
    while(sv[idx] != '}') {
      ++idx;
    }
  }
  return 0xFFFFFFFF;
}


int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
