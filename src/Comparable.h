#ifndef COMPARABLE_H
#define COMPARABLE_H

template<class Derived_t>
class Comparable {
public:
    bool operator>(const Derived_t& other) const {
        return other < static_cast<const Derived_t &>(*this);
    }
    bool operator<=(const Derived_t& other) const {
        return !(this->operator>(other));
    }
    bool operator>=(const Derived_t& other) const {
        return !(static_cast<const Derived_t&>(*this) < other);
    }
};

#endif //COMPARABLE_H