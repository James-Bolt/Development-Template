// Copyright free James-Bolt 2020

#include "Class_MediaPlayer.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	int index;
	int number;
	string a, b, c, d, e, f, str;
	MediaPlayer mass;
	ifstream file;
	int tmp = 0;

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
		cout << "11. ����� �� ���������" << endl;
		cin >> number;
		cin.ignore();
		cout << endl;
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
			cout << endl;
			break;
		case 4:
			cout << "������� ��� ������, ��� ����� �� ������ �����: ";
			cin >> a;
			cout << endl;
			break;
		case 5:
			cout << "������� ��� �����������, ��� ����� �� ������ �����: ";
			cin >> a;
			cout << endl;
			break;
		case 6:
			cout << "������� ��� �����������, ��� ����� �� ������ �����: ";
			cin >> a;
			cout << endl;
			break;
		case 7:
			cout << mass.size << endl;
			break;
		case 8:
			cout << "������� �������� �����, ������� �� ������ �������: ";
			cin >> a;
			index = mass.index_of_Song_name(a);
			mass.delete_song(a, index);
			cout << endl;
			break;
		case 9:
			file.open("C://Data.txt", ios::in);
			if (!file.is_open()) cout << "Cant open file" << endl;
			while (getline(file, str)) {
				tmp++;
				if (tmp == 1) {
					a = str.erase(0, 29);
				}
				if (tmp == 2) {
					b = str.erase(0, 23);
				}
				if (tmp == 3) {
					c = str.erase(0, 25);
				}
				if (tmp == 4) {
					d = str.erase(0, 24);
				}
				if (tmp == 5) {
					e = str.erase(0, 33);
				}
				if (tmp == 6) {
					f = str.erase(0, 23);
				}
				if (tmp == 7) {
					mass.add_new_song(a, b, c, d, e, f);
					tmp = 0;
				}
			}
			file.close();
			break;
		case 10:
			mass.set_Data_to_file();
			break;
		case 11:
			exit(1);
		}
		for (int i = 0; i < mass.size; ++i) {
			mass.arr[i].show_song_info();
		}
	}
	delete[] mass.arr;
	return 0;
}