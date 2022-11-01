#pragma once

struct CreateInfo {
    std::string name;
    DgBool32 xrEnabled;
    mCallback_T pCallback(Message::Message*);
};