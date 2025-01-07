#ifndef COMPARABLEPERSON_H
#define COMPARABLEPERSON_H

#include "Comparable.h" 
#include <string>       
#include <algorithm>    // for std::transform
#include <cctype>       // for tolower

//  additional function to lowercase a firstname and lastname
inline void strToLower(std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){return tolower(c);});
};

class ComparablePerson: public Comparable<ComparablePerson> {
private:
    std::string first_name{}, last_name{};
public:
// constructor
    ComparablePerson(const std::string& first_name, const std::string& last_name)
        : first_name(first_name), last_name(last_name) {
            strToLower(this->first_name);
            strToLower(this->last_name);
        }
// base operator <
    bool operator<(const ComparablePerson& other) const noexcept {
        if (this->first_name < other.first_name) return true;
        if (this->first_name == other.first_name && this->last_name < other.last_name) return true;
        return false;
    }
};

#endif //COMPARABLEPERSON_H