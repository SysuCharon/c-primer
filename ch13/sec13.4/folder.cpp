#include "folder.h"

using namespace std;

Message::Message(const Message& rhs)
    : _contents(rhs._contents), _floders(rhs._folders) {
    for (auto f: _floders) {
        addToFloders(f);
    }
}
