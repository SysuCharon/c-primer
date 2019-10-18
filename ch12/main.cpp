#include "text_query.h"

int main(int argc, char* argv[]) {
    std::string path = "in_file";
    std::ifstream infile(path);
    TextQuery tq(infile);
    QueryResult qs;
    std::cout << "fuck build" << std::endl;
    return 0;
}
