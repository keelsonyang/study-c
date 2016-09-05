#include <Python.h>

int great_function_from_python(int a);

int main(int argc, char* argv[])
{
	Py_Initialize();
	printf("%d", great_function_from_python(2));
	Py_Finalize();
}

