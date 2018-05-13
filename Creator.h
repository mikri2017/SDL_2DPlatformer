#ifndef CREATOR_H_INCLUDED
#define CREATOR_H_INCLUDED

#include <memory>


namespace utils
{
    template <typename T>
    std::shared_ptr<T> create()
    {
        return std::make_shared<T>();
    }
}

#endif // CREATOR_H_INCLUDED