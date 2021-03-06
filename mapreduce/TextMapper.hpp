#pragma once

#include "MapperInterface.hpp"

namespace ssodc {
namespace mapreduce {

class TextMapper : public MapInterface {
    std::string m_filePath;
    std::map<int, std::string> m_partPath;
public:
    TextMapper(std::string&);
    ~TextMapper();

    int Mapping(int);
    std::map<int, std::string> GetPartPath();
};

} /* namespace mapreduce */
} /* namespace ssodc */