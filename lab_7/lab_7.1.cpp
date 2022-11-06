

#include <iostream>


void menu()
{
	std::cout << "Menu: " << std::endl;
	std::cout << std::endl;
	std::cout << "1) Task 1;" << std::endl;
	std::cout << "2) Task 2;" << std::endl;
	std::cout << "3) Task 3;" << std::endl;
	std::cout << "4) Exit " << std::endl;
}


void menu_3()
{
	std::cout << "Task 7:" << std::endl;
	std::cout << "Task 7:" << std::endl;
	std::cout << "Task 7:" << std::endl;
}


void check_AtLeastOneBelowZero_ex1(int rows, int colums, float **a)
{

	bool AtLeastOneBelowZero = false;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j++; j < colums)
		{
			if (a[i][j] < 0)
			{
				AtLeastOneBelowZero = true;
			}
			if (AtLeastOneBelowZero)
			{
				break;
			}
		}

		if (!AtLeastOneBelowZero)
		{
			break;
		}
	}

	if (!AtLeastOneBelowZero)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
					a[i][j] *= -1;
			}
		}
	}
}


void creating_ex1(int rows, int colums, float** a)
{
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			a[i][j] = colums*rows - 2*(rand() % (colums*rows));
		}
	}
}


void output_ex1(int rows, int colums, float** a)
{
	std::cout << std::endl;
	std::cout << "=======================";
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			std::cout << a[i][j] << "     ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}


void ex1()
{
	std::cout << std::endl << std::endl <<"=============TASK 1=============" << std::endl << std::endl;
	


	int rows = 0;
	std::cout << "Enter the number of rows: ";
	std::cin >> rows;


	int colums = 0;
	std::cout << "Enter the number of colums: ";
	std::cin >> colums;


	float** a;
	a = new float* [rows];
	for (int i = 0; i < rows; i++)
	{
		a[i] = new float[colums];
	}


	creating_ex1(rows, colums, a);
	output_ex1(rows, colums, a);
	check_AtLeastOneBelowZero_ex1(rows, colums, a);
	output_ex1(rows, colums, a);


	for (int i = 0; i < rows; i++)
	{
		delete[]a[i];
	}
	

	menu();
}


void ex2()
{
	char text[999];
	std::cout << "Enter text: ";
	getchar();
	gets_s(text);


	int last_entering = 0;
	for (int i(0); i<strlen(text); i++)
	{
		if (text[i] == '.')
		{
			last_entering = i;
		}
	}


	int k = 0;
	for (last_entering; last_entering < strlen(text); last_entering++)
	{
		if (text[last_entering] == 't')
		{
			k++;
		}
	}

	std::cout << "Number of occurrences of a letter(t): " << k << std::endl << std::endl;
	menu();
}


void ex6()
{
	char text[999];
	std::cout << "Enter text: ";
	getchar();
	gets_s(text);
	

	for (int i(0); i < strlen(text)-2; i++)
	{
		if ((text[i] == 'm' && text[i + 1] == 'i' && text[i + 2] == 's') || (text[i] == 'r' && text[i + 1] == 'o' && text[i + 2] == 'j') || (text[i] == 'd' && text[i + 1] == 'o' && text[i + 2] == 'c'))
		{
			text[i + 3] = '`';
		}
	}

	std::cout << "Your text rn: ";
	for (int i(0); i < strlen(text); i++)
	{
		std::cout << text[i];
	}
	std::cout << std::endl << std::endl;
	menu();
}


void ex9_7()
{
	char text[999];
	std::cout << "Enter text: ";
	getchar();
	gets_s(text);


	int counter = 0, start_straight = 0;
	for (int i(0); i < strlen(text); i++)
	{
		int first_entering = i;
		if(start_straight !=0)
		{
			for (int z(0); z < strlen(text); z++)
			{
				if (text[z] == ' ')
				{
					first_entering = z;
					z = strlen(text);
				}
			}
		}
		else
		{
			start_straight++;
		}


		int last_entering = strlen(text);
		for (int j(strlen(text)); j > i; j--)
		{
			if (text[j] == ' ')
			{
				last_entering = j;
			}
		}
		
		
		int k = 0;
		for (first_entering; first_entering <last_entering; first_entering++)
		{
			if (text[first_entering] == 'a')
			{
				k++;
			}
		}
		if (k > 1)
		{
			counter++;
		}
	}


	std::cout << std::endl << counter << std::endl;
}


int main()
{
	menu();
	

	int a = 0;

	int choice_n = 0;
	bool work = true;
	while(work)
	{
		bool isIncorrect;
		do {
			isIncorrect = false;
			std::cout << "Enter n" << std::endl;
			std::cin >> choice_n;
			if (std::cin.fail()) {
				isIncorrect = true;
				std::cout << "Error! Enter correct n: " << std::endl;
				std::cin.clear();
				while (std::cin.get() != '\n');
			}
		} while (isIncorrect);

		switch (choice_n)
		{

			case 1:
			{
				ex1();
				break;
			}

			case 2:
			{
				ex2();
				break;
			}

			case 3:
			{
				menu_3();
				int choice_3 = 0;
				bool isIncorrect_3;
				do {
					isIncorrect_3 = false;
					std::cout << "Enter n" << std::endl;
					std::cin >> choice_3;
					if (std::cin.fail()) {
						isIncorrect_3 = true;
						std::cout << "Error! Enter correct n: " << std::endl;
						std::cin.clear();
						while (std::cin.get() != '\n');
					}
				} while (isIncorrect_3);


				switch (choice_3)
				{
					case 1:
					{
						ex9_7();
						break;
					}



					default:
					{
						break;
					}
				}


				break;
			}

			case 4:
			{
				std::cout << "Exit";
				work = false;
				break;
			}

			default:
			{
				std::cout << "Input error (choose a number from 1 to 4): ";
			}

		}
	}
	

	return 0;
}


