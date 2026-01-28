#pragma once

#include <cstdint>
#include <istream>
#include <vector>

class CSVReader {
public:
    CSVReader(std::istream *input, char delim = ',');
    std::vector<std::string> GetRow(uint8_t cnt_columns);
    bool IsRead();

private:
    std::istream *input_{nullptr};
    char delim_;
};
