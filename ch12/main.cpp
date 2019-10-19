#include "text_query.h"

int main(int argc, char* argv[]) {
    std::string path = "in_file";
    std::ifstream infile(path);
    TextQuery tq(infile);

    std::string input;
    while (std::cin >> input) {
        auto qr = tq.query(input);
        qr.print(std::cout) << std::endl;
    }

    return 0;
}
