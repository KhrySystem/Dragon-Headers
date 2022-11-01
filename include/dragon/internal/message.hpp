#pragma once

struct Message {
    uint_fast64_t code;
    std::string message;
};

typedef void(*mCallback_T)(Message);