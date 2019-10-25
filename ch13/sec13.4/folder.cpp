#include "folder.h"

using namespace std;

Folder::addMsg(const Message* msg) {
    _messages.insert(msg);
}

Folder::remMsg(const Message* msg) {
    if (_messages.find(msg) != _messages.end()) {
        _message.erase(msg);
    }
}

Message::Message(const Message& rhs)
    : _contents(rhs._contents), _floders(rhs._folders) {
    for (auto f: _floders) {
        addToFolders(rhs);
    }
}

void Message::save(Folder& f) {
    _floders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder& f) {
    if (_floders.find(&f) != _floders.end()) {
        _floders.erase(&f);
        f.remMsg(this);
    }
}

void Message::addToFolders(const Message& msg) {
    for (auto f: msg._folders) {
        f->addMsg(this);
    }
}

void Message::removeFromFolders() {
    for (auto f: msg._folders) {
        f->remMsg(this);
    }
}

Message::~Message() {
    removeFromFolders();
}

Message& Message::operator=(const Message& rhs) {
    removeFromFolders();
    _contents = rhs._contents;
    _floders = rhs._floders;
    addToFolders(rhs);
    return *this;
}
