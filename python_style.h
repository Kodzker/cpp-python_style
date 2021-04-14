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
    
        
        
    //будет выглядить как то так: настоящая питоновская функция. для ее реализации мне нужно изучать:  https://metanit.com/cpp/c/5.13.php   https://ru.wikipedia.org/wiki/Вариативная_функция
    // template<typename T> // 
    // void print( T &obj, ...){
    //     for i in args:
    //        print(obj);
    //        next();
    // }
// дело в том что тольько для этой функции ненужно знать настоящий тип обьекта. если мне от него нужно только вызвать его собственную функцию _print_()
        
        
    
    // функции в питоне нет, я ее вскоре убери и заменю на ту функцию которая отвечает за присваивание в обьект другого обьекта(:=)
    void set( auto &obj, const auto args, const auto &length){
        obj._set_(args, length);
    }
  
        
  
    //  функции в питоне нет, я ее вскоре убери и заменю на ту функцию которая отвечает за :=
    void set(auto &obj, const auto &res){
        obj._set_(res);
    }
  
    // данная функция просит у объекта количество его содержимого используя его методы.
    // actually types: variables, List
    int len(auto &obj) {
        return obj._len_();
    }
};


#endif //CYTON_PYTHON_STYLE_H
