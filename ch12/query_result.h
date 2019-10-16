#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>

class QueryResult {
public:
    QueryResult() {}
    QueryResult(std::string word,
            std::shared_ptr<std::vector<int>> lines,
            std::shared_ptr<std::vector<std::string>> files):
        _word(word), _lines(lines), _files(files) {}
private:
    std::string _word;
    std::shared_ptr<std::vector<int>> _lines;
    std::shared_ptr<std::vector<std::string>> _files;
};

#endif
