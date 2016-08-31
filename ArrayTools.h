//
// Created by KasperSK on 8/31/2016.
//

#ifndef TEMPLATES_ARRAYTOOLS_H
#define TEMPLATES_ARRAYTOOLS_H

template <typename T>
T* myfind(T* first, T* last, const T& v){
    for(; first != last; ++first){
        if(*first == v)
            return first;
    }
}

template <typename T, typename U>
T* myfind(T* first, T* last, const U& v){
    for(; first != last; ++first){
        if(*first == v)
            return first;
    }
}

#endif //TEMPLATES_ARRAYTOOLS_H
