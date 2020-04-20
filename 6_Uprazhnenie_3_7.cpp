/**Задание 6 Упражнение 3.7. Напишите программу, которая читает две строки и уведомляет, равны ли они, а если нет,
 какая из них больше.Измените программу так, чтобы она указывала, имеют ли строки одинаковую длину, и
 если нет, то какая из них длинней.
 */
#include <iostream>

using namespace std;

int main()
{
string line, line2;
    while (getline(cin, line)){
                break;
}
    while (getline(cin, line2)){
                break;
}
if (line == line2)
    cout<<"line = line2"<< endl;
if (line > line2)
    cout<<"line > line2"<< endl;
if (line < line2)
    cout<<"line < line2"<< endl;

if (line.size() == line2.size())
    cout<<"size line = size line2"<< endl;
if (line.size() > line2.size())
    cout<<"size line > size line2"<< endl;
if (line.size() < line2.size())
    cout<<"size line < size line2"<< endl;
return 0;
}

