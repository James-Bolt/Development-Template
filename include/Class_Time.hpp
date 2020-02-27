#ifndef INCLUDE_CLASS_TIME_HPP_
#define INCLUDE_CLASS_TIME_HPP_
#include <string>
#include <iostream>

using namespace std;

class Time {

private:
  int hour = 0;                                            // ����
  int min = 0;                                             // ������
  int sec = 0;                                             // �������

public:
  Time();                                                  // ����������� �� ���������
  Time(string str);                                        // ����������� �������������� ����
  Time(int _hour, int _min, int _sec);                     // ����������� �������������

  string IntToStr();                                       // ����� �������������� ����
  Time operator+(Time T);                                  // ����� ��������
  Time operator-(Time T);                                  // ����� ���������

  friend bool operator>(const Time &T1, const Time &T2);   // ������������� �������� ���������
  friend bool operator<(const Time &T1, const Time &T2);   // ������������� �������� ���������
  friend bool operator==(const Time &T1, const Time &T2);  // ������������� �������� ���������
  friend ostream& operator<<(ostream &out, Time Time);     // ������������� �������� ������
  friend istream& operator>>(istream &in, Time &Time);     // ������������� �������� �����

  ~Time() {}                                               // ���������� ( ������� ��� ������ �� ���� ��� ��� ������� � �������, ���� �� ����� ����� �� �����, �.�. �� �������� �� �������������)
};

#endif INCLUDE_CLASS_TIME_HPP_