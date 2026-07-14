#pragma once
#include <ostream>
#include <utility>
#include <vector>

template <typename A, typename B>
std::ostream &operator<<(std::ostream &os, const std::pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    os << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i] << (i + 1 < v.size() ? ", " : "");
    }
    return os << ']';
}

#define dbg(x) std::cerr << #x << " = " << (x) << '\n';
