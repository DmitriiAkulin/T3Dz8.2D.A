#include "figure.h"

Figure::Figure(int _side_count):_side_count(_side_count) {}//конструктор с параметром

Figure::Figure():Figure(0) {
    if (_side_count == 0) correct = "правильная"; else correct = "неправильная";
    if (correct == "неправильная") { throw MyExeption{ "Ошибка Создания фигуры" }; }
}//конструктор

int Figure::get_sides_count() { return _side_count; }//метод для доступа к полю _side_count      
std::string Figure::get_name() { return name; }//метод для доступа к полю name

  bool Figure::check() {
    return (_side_count == 0);
}

  void Figure::print_info() {
    /*try {
    if (check() == true) correct = "правильная"; else correct = "неправильная";
    if (correct == "неправильная") {throw MyExeption {"Ошибка Создания фигуры"};}
    }
    catch (MyExeption ex)
    {
        std::cout << ex.getMessage() << std::endl << std::endl;
    }
    */
    std::cout << name << std::endl << correct << std::endl << "количество сторон: " << _side_count << std::endl;
}
