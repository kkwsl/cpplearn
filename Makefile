cpp1609.exe : cpp1609.obj
	cl cpp1609.obj /link user32.lib
cpp1609.obj : cpp1609.cpp
	cl /c cpp1609.cpp
clean : 
	del cpp1609.obj cpp1609.exe