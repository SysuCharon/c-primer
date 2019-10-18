#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include "query_result.h"
#include <unordered_map>
#include <fstream>

class TextQuery {
public:
    TextQuery() {}
    TextQuery(std::ifstream& infile);
    QueryResult query(const std::string& word) const;
private:
    std::shared_ptr<std::vector<std::string>> _files;
    std::unordered_map<std::string, std::shared_ptr<std::vector<int>>> _word_map;
};

#endif
