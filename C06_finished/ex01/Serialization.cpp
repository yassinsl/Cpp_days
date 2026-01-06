#include "Serialization.hpp"

Data::Data(): id(1), score(12.5), name("Data"){}

uintptr_t Serializer::serialize(Data * ptr){return(reinterpret_cast<uintptr_t>(ptr));}

Data* Serializer::deserialize(uintptr_t raw){return reinterpret_cast<Data *>(raw);}

