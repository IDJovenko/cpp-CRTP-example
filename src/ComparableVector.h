#ifndef COMPARABLEVECTOR_H
#define COMPARABLEVECTOR_H

#include <vector>
#include <initializer_list>
#include "Comparable.h"

class ComparableVector: public Comparable<ComparableVector>{
    std::vector<double> values;
public:
    // constructor
    ComparableVector(std::initializer_list<double> il): values(il) {};
    // additional function
    std::vector<double>::size_type size() const noexcept {return values.size(); };
    auto begin() const { return this->values.begin(); }
    auto end() const { return this->values.end(); }
    // base operator <
    bool operator<(const ComparableVector& other) const noexcept {
        // comparison of squere of vectors norm
        double norm1 = 0, norm2 = 0;
        for (const auto& x: this->values) norm1+= x*x;
        for (const auto& y: other) norm2+= y*y;
        return norm1 < norm2;
    }
};

#endif //COMPARABLEVECTOR_H