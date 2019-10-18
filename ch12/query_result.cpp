#include "query_result.h"

std::ostream& QueryResult::print(std::ostream& out) {
    out << "query: " << _word << std::endl;
    out << "num: " << _lines->size() << std::endl;
    out << "contain line: " << std::endl;
    for (int num: *_lines) {
        out << "  " << num << ": " << (*_files)[num] << std::endl;
    }
    return out;
}
