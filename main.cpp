#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 3. ���������� �������." << endl;
	cout << "-----------------------------------------" << endl << endl;


	float x, y, z;
	int X, Y, Z;
	int count = 0, setsize = 0, edge = 2;

	cout << "������� ��������� ������:" << endl;

	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	cout << "Z: ";
	cin >> z;



	if (x < 5 || y < 5 || z < 5) {
		cout << "�����: " << endl << "�� ������ ������ ���������� ���������� �� ������ ������." << endl;
	}
	else {
		
		if (x >= y && x >= z) {
			if (y <= z) {
				y += z;
				z = y - z;
				y = y - z;

			}
		}
		else if (y >= x && y >= z) {
			
			
			x += y;
			
			y = x - y;
			
			x -= y;
			
			if (y <= z) {
				y += z;
				z = y - z;
				y = y - z;
				
			}
				
		}
		else if (z >= x && z >= y) {
			x += z;
			z = x - z;
			x -= z;
			if (y <= z) {
				y += z;
				z = y - z;
				y = y - z;
					
			}
				
		}
			
	}
	
	

	X = x;
	Y = y;
	Z = z;


	while (X >= 5) {
		X -= 5;
		
		while (Y >= 5) {
			
			Y -= 5;
			while (Z >= 5) {
				
				Z -= 5;
				count++;
			}
			Z = z;
		}
		Y = y;
	}

	

	setsize = edge * edge * edge;

	if (setsize > count) {
		cout << "�����: " << endl << "�� ������ ������ ���������� ���������� �� ������ ������." << endl;

	}
	else {
		while (setsize <= count) {
			edge++;
			setsize = edge * edge * edge;
			if (setsize > count) {
				edge--;
				setsize = edge * edge * edge;
				break;
			}
		}
		cout << "�����: " << endl << endl;
		cout << "�� ����� ������ ����� ���������� " << count << " �������. " << endl << endl;
		cout << "�� ��� ����� ��������� ����� �� " << setsize << " �������." << endl;

	}

	

}