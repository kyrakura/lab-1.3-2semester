// CharLine.h
#pragma once
#include <string>

class CharLine {
private:
    int N;
    char* s;

public:
    CharLine();
    void Init(int n, const char* str);
    void Display() const;
    std::string toString() const;
    char CharAt(int position) const;
    bool Contains(char c) const;
    void Concat(const CharLine& other);
    int CompareTo(const CharLine& other) const;
    bool ContainsSubstr(const CharLine& substr) const;
};