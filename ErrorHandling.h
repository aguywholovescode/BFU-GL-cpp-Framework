/*MIT License

Copyright(c)[2018][Mehmet ÖZGÜN] <fedqx@hotmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <glfw3.h>
#include <iostream>
#include <string>


#pragma once
#define Error_Failed 0 // error code for failed application
#define Error_Cancelled -1 // error code for cancalled application
#define Succes 1  // error code for Succesed applicaiton

//test
class ErrorHandling
{

ErrorHandling();
	~ErrorHandling();


public:
	bool checkGLFWwindow(GLFWwindow *window); // ! you need to pass the window object that you want to get checked 
	void clean() // cleans the cmd screen
	{

		system("cls");

	}

	void print(int a) //prints the type in parametre to cmd 
	{

		std::cout << a << std::endl;

	}
	void print(std::string a)//prints the type in parametre to cmd 
	{

		std::cout << a << std::endl;

	}
	void print(short a)//prints the type in parametre to cmd 
	{

		std::cout << a << std::endl;

	}
	void print(long a)//prints the type in parametre to cmd 
	{

		std::cout << a << std::endl;

	}
	void getinput(int *x) // gets input for the type in parametre by std::cin command
	{

		std::cin >> *x;


	}
	void getinput(short *x)// gets input for the type in parametre by std::cin command
	{

		std::cin >> *x;


	}
	void getinput(long *x)// gets input for the type in parametre by std::cin command
	{

		std::cin >> *x;


	}
	
	void pause() // waits for any input for cmd screen
	{
		system("pause");


	}
	
	
};

