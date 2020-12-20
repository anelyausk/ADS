//recursive
#include <iostream>

using namespace std;

//факториал

int rec(int n){
    if (n < 0) return 0;
    if (n == 0) return 1;
    else return n * rec(n - 1);
}

//структура то же что и класс, но без методов
//конструктор структуры - ф-я, которая используется для инициализации полей структуры при создании обьекта структуры. поля - x, y; которыми описывается
//структ - некий шаблон, которым создается неск обьектов. обьект - конкретный экземпляр.

struct point{
    point(){} //описываем конструктор по умолчаниб, чтоюв он запустился и не ругался что мы не перелаои значения этим путем: point pos1(1, 1);
    int x, y;
}dot1, dot2;

//деструктор волнаpoint({deletex; delete y}); освобождает память

int main(){
    //fac
    int n;
    cin >> n;
    cout << rec(n) << endl;
    //struc
    dot1.x = 6;
    dot2.x = 4;
    //another struc
    point pos1;
    point pos2;
    cin >> pos1.x >> pos1.y;
    cin >> pos2.x >> pos2.y;
    if (pos1.x == pos2.x || pos1.y == pos2.y){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}