// CharLine.cpp
#include "CharLine.h"
#include <iostream>
#include <cstring>

CharLine::CharLine() : N(0), s(nullptr) {}

void CharLine::Init(int n, const char* str) {
    N = n;
    s = new char[N + 1];
    strcpy_s(s, N + 1, str);
}

void CharLine::Display() const {
    std::cout << s << std::endl;
}

std::string CharLine::toString() const {
    return std::string(s);
}

char CharLine::CharAt(int position) const {
    return s[position];
}

bool CharLine::Contains(char c) const {
    for (int i = 0; i < N; ++i) {
        if (s[i] == c)
            return true;
    }
    return false;
}

void CharLine::Concat(const CharLine& other) {
    char* temp = new char[N + other.N + 1];
    strcpy_s(temp, N + other.N + 1, s); 
    strcat_s(temp, N + other.N + 1, other.s); 
    delete[] s;
    s = temp;
    N += other.N;
}

int CharLine::CompareTo(const CharLine& other) const {
    return strcmp(s, other.s);
}

bool CharLine::ContainsSubstr(const CharLine& substr) const {
    return strstr(s, substr.s) != nullptr;
}