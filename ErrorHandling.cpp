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

#include "ErrorHandling.h"



ErrorHandling::ErrorHandling()
{
	std::cout "created a error handler object !" << std::endl;
}


ErrorHandling::~ErrorHandling()
{
}

bool ErrorHandling::checkGLFWwindow(GLFWwindow * window)
{

	if (window == NULL)
	{
		std::cout << "Error GLFW window is NULL! Proceed for terminating glfw" << std::endl;
		system("pause");
		glfwTerminate();
		return Error_Failed;
	}
	if (window != NULL)
	{
		std::cout << "GLFW window is NOT null!" << std::endl;
		system("pause");
		return Succes;
	}


	
}
