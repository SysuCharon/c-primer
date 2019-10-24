#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include <unordered_set>
#include <string>
#include <memory>

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
    std::unordered_set<std::shared_ptr<Folder>> _floders;
}

class Folder {
public:
    Folder() {};
    addMsg(const Message& msg);
    remMsg(const Message& msg);

private:
    std::unordered_set<std::shared_ptr<Message>> _messages;
}

#endif
