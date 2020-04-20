// Copyright free James-Bolt 2020

#include "Class_MediaPlayer.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	int index;
	int number;
	string a, b, c, d, e, f;
	MediaPlayer mass;

	while (1) {
		cout << "��������:" << endl;
		cout << "1. �������� �����" << endl;
		cout << "2. �������� ������ �����" << endl;
		cout << "3. ����� ����� �� ��������� � �����������" << endl;
		cout << "4. ������ ��� ����� ��������� ������" << endl;
		cout << "5. ������ ��� ����� ��������� �����������" << endl;
		cout << "6. ������ ��� ����� ��������� �����������" << endl;
		cout << "7. ������ ������� ����� �����" << endl;
		cout << "8. ������� �����" << endl;
		cout << "9. ������� �������� �� �����" << endl;
		cout << "10. �������� �������� � ����" << endl;
		cin >> number;
		switch (number) {
		case 1:
			cout << "�������� �����: ";
			cin >> a;
			cout << "����� �����: ";
			cin >> b;
			cout << "����� ������: ";
			cin >> c;
			cout << "�����������: ";
			cin >> d;
			cout << "�������� �������: ";
			cin >> e;
			cout << "���� ������: ";
			cin >> f;
			cout << endl;
			mass.add_new_song(a, b, c, d, e, f);
			break;
		case 2:
			cout << "������� �������� �����, ������ � ������� �� ������ ��������: ";
			cin >> a;
			index = mass.index_of_Song_name(a);
			cout << index;
			cout << "������� ����� ������:"<< endl;
			cout << "����� �����: ";
			cin >> b;
			cout << "����� ������: ";
			cin >> c;
			cout << "�����������: ";
			cin >> d;
			cout << "�������� �������: ";
			cin >> e;
			cout << "���� ������: ";
			cin >> f;
			mass.arr[index].set_Author_of_song(b);
			mass.arr[index].set_Author_of_music(c);
			mass.arr[index].set_Name_of_singer(d);
			mass.arr[index].set_Name_of_album(e);
			mass.arr[index].set_Date_of_release(f);
			cout << endl;
			break;
		case 3:
			cout << "������� �������� � ����������� �����, ������� �� ������ �����" << endl;
			cout << "�������� �����: ";
			cin >> a;
			cout << "�����������: ";
			cin >> b;
			cout << endl;
			index = mass.index_of_Song_name_and_singer(a, b);
			cout << "���������� � �����: " << endl;
			if(index != -1) mass.arr[index].show_song_info();
			break;
		case 4:
			cout << "������� ��� ������, ��� ����� �� ������ �����: ";
			cin >> a;
			break;
		case 5:
			cout << "������� ��� �����������, ��� ����� �� ������ �����: ";
			cin >> a;
			break;
		case 6:
			cout << "������� ��� �����������, ��� ����� �� ������ �����: ";
			cin >> a;
			break;
		case 7:
			cout << mass.size << endl;
			break;
		case 8:

			break;
		case 9:
			break;
		case 10:
			break;
		}
		for (int i = 0; i < mass.size; ++i) {
			mass.arr[i].show_song_info();
		}
	}

	return 0;
}