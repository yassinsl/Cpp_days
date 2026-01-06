#include "Serialization.hpp"

int main(void)
{
  Data data;
  Data*original = &data;
  uintptr_t raw = Serializer::serialize(original);
  Data* back = Serializer::deserialize(raw);
  if(back == original )
    std::cout << back << " is same adderess to " << original << std::endl;

}
