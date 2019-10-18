#include <sstream>
#include "text_query.h"

TextQuery::TextQuery(std::ifstream& infile):
    _files(new std::vector<std::string>){
    std::string line;
    while (std::getline(infile, line)) {
        _files->push_back(line);
        int line_num = _files->size() - 1;

        std::stringstream ss(line);
        std::string word;

        while (ss >> word) {
            auto& line_num_vec = _word_map[word];
            if (!line_num_vec) {
                line_num_vec.reset(new std::vector<int>);
            }
            if (line_num_vec->empty() || line_num != line_num_vec->back()) {
                line_num_vec->push_back(line_num);
            }
        }
    }
}

QueryResult TextQuery::query(const std::string& word) const {
    QueryResult qs;
    return qs;
}
