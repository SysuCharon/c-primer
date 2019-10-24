#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include <unordered_set>
#include <string>

class Folder;

class Message {
    friend Folder;
public:
    Message(const std::string& msg = ""): _contents(msg) {}
    // 拷贝控制
    Message(const Message& rhs);
    Message& operator=(const Message& rhs);
    ~Message();

    void save(Folder& f);
    void remove(Folder& f);

private:
    void addToFolders(const Message& msg);
    void removeFromFolders();

    std::string _contents;
    std::unordered_set<Folder*> _floders;
}

#endif
