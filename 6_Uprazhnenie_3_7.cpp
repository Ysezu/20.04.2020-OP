/**������� 6 ���������� 3.7. �������� ���������, ������� ������ ��� ������ � ����������, ����� �� ���, � ���� ���,
 ����� �� ��� ������.�������� ��������� ���, ����� ��� ���������, ����� �� ������ ���������� �����, �
 ���� ���, �� ����� �� ��� �������.
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

