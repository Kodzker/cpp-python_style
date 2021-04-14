        obj._set_(args, length);
//
// Created by cyton_code on 11.04.2021.
//

#ifndef CYTON_PYTHON_STYLE_H
#define CYTON_PYTHON_STYLE_H

namespace python_style {
  
    // вывод на екран обьекта. пока что без (obj, ...)
    // в настоящем питоновском принте нужно обьязательно учитывать типы, а это пока что
    // сложно(но я додумаюсь както принимать родительмский тип) чтобы стараться вызвать каждого обьекта вот этой функцией.
    void print(const auto &obj){
        obj._print_();
    }
  
  
    // функции в питоне нет, я ее вскоре убери и заменю на ту функцию которая отвечает за :=
    void set( auto &obj, const auto args, const auto &length){
        obj._set_(args, length);
    }
  
  
    //  функции в питоне нет, я ее вскоре убери и заменю на ту функцию которая отвечает за :=
    void set(auto &obj, const auto &res){
        obj._set_(res);
    }
};


#endif //CYTON_PYTHON_STYLE_H
