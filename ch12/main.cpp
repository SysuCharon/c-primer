#include "text_query.h"

int main(int argc, char* argv[]) {
    std::string path = "in_file";
    std::ifstream infile(path);
    TextQuery tq(infile);
    std::cout << "fuck build" << std::endl;

    auto qr = tq.query("a");
    qr.print(std::cout) << std::endl;

    return 0;
}
