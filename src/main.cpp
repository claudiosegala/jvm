#include <iostream>
#include <string>
#include "_class.hpp"

int main (int argc, char *argv[ ]) {
	auto cl = jvm::_Class();
	std::string show;
	try {
	if(argc == 1)
	{
		std::string programa;
		std::cout << "Digite o nome do arquivo ou o caminho para o arquivo:" << std::endl;
		std::cin >> programa;
		cl.read(std::string(programa));
		std::cout << "Digite S caso queria exiber o arquivo e N caso nao queira" << std::endl;
		std::cin >> show;
		show[0] = std::toupper(show[0]);
 	}
	else if(argc == 2)
	{
		if(std::string(argv[1]) == "-l")
		{
			std::cout << "Argumento invalido" << std::endl;
			show = "N";
			
		}   
		else if(std::string(argv[1]) != "-l")
		{

			cl.read(std::string(argv[1]));
			show = "N";
		}
	}


	else if (argc == 3) {

		if (std::string(argv[2]) == "-l") {
			cl.read(std::string(argv[1]));
			show = "S";
		} else if (std::string(argv[1]) == "-l") {
			cl.read(std::string(argv[2]));
			show = "S";
		}
	}
	else if (argc > 3) {
		std::cout << "O senhor ta pedindo demais" << std::endl;
		show = "N";
		return 0;
	}



		if(show != "N")
			cl.show();
	} catch (std::string& error) {
	    std::cout << error << std::endl;
	}

}
