#include "figure.h"

Figure::Figure(int _side_count):_side_count(_side_count) {}//����������� � ����������

Figure::Figure():Figure(0) {
    if (_side_count == 0) correct = "����������"; else correct = "������������";
    if (correct == "������������") { throw MyExeption{ "������ �������� ������" }; }
}//�����������

int Figure::get_sides_count() { return _side_count; }//����� ��� ������� � ���� _side_count      
std::string Figure::get_name() { return name; }//����� ��� ������� � ���� name

  bool Figure::check() {
    return (_side_count == 0);
}

  void Figure::print_info() {
    /*try {
    if (check() == true) correct = "����������"; else correct = "������������";
    if (correct == "������������") {throw MyExeption {"������ �������� ������"};}
    }
    catch (MyExeption ex)
    {
        std::cout << ex.getMessage() << std::endl << std::endl;
    }
    */
    std::cout << name << std::endl << correct << std::endl << "���������� ������: " << _side_count << std::endl;
}
