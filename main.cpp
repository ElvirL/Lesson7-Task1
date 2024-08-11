/*
������ 1
��� ����� �������:
�������� ������� swapvec, ����������� std::vector<int> � ��������� �� ������ ���������� ���� int (������ �������) � 
������������ �������� ���� ��������.

������:

std::vector<int> a = {1,2,3,4};
int b[] = {2,4,6,8};
swapvec(a,b);
for(int i = 0; i < 4; ++i)
std::cout << a[i];
std::cout << std::endl;
for(int i = 0; i < 4; ++i)
std::cout << b[i];

�����:
2468
1234

���-���� ��� �������� ������:
� ������� ��������� ���������� ���� ������, ��� ������������� �������� � void.
� ������� �� ���������� ��������� ����� <iostream> � <vector>.
� ������� ������ �������� ����� ���������.
� ������ ��������� �� ������.

*/

#include <iostream>
#include <vector>

using namespace std;

void swapvec(vector<int>& vec, int* m){
    for (size_t i=0; i< vec.size(); ++i){
        int t = *m;
        *m = vec[i];
        vec[i] = t;
        ++m;
    }
}

int main(){
    vector<int> a = {1,2,3,4};
    int b[] = {2,4,6,8};

    swapvec(a,b);

    for(int i = 0; i < 4; ++i)
        std::cout << a[i];

    std::cout << std::endl;

    for(int i = 0; i < 4; ++i)
        std::cout << b[i];
}