#include <iostream>


//��� (*���_�������[������]) (���������)


using namespace std;

void func1() {
    cout << "����� ������� 1" << endl;
}

void func2() {
    cout << "����� ������� 2" << endl;
}

void func3() {
    cout << "����� ������� 3" << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    void (*functions[3])() = { func1, func2, func3 };

     
    for (int i = 0; i < 3; ++i) {
        functions[i](); 
    }

    system("pause");
    return 0;
}
