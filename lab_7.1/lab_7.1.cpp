

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


void check_AtLeastOneBelowZero_ex1(int rows, int colums, float **a)
{

	bool AtLeastOneBelowZero = true;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j++; j < colums)
		{
			if (a[i][j] < 0)
			{
				AtLeastOneBelowZero = true;
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
				if (a[i][j] != 0)
				{
					a[i][j] = (1 / a[i][j]);
				}
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
			a[i][j] = colums * rows - rand() % (colums * rows * 2);
		}
	}
}


void check(int choice_n)
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

	choice(choice_n);

}


void choice(int choice)
{

	while (true)
	{
		std::cin >> choice;
		check(choice);
		if (choice > 4 || choice < 1)
		{
			std::cout << "Your number is incorrect(" << choice << "). " << "Choose the number from 1 to 4";
			std::cout << std::endl;
		}
		else
		{
			break;
		}
	}

	switch (choice)
	{
	case 1:
	{
		ex1();
		break;
	}
	case 2:
	{

	}
	case 3:
	{

	}
	case 4:
	{
		std::cout << "Exit";
		break;
	}
	default:
	{
		std::cout << "Input error (choose a number from 1 to 4): ";
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
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "=============TASK 1=============";
	std::cout << std::endl;
	std::cout << std::endl;


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




}


void ex3()
{

}


int main()
{
	menu();
	

	int a = 0;
	check(a);
	

	return 0;
}