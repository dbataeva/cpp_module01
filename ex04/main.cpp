#include <iostream>
#include <string>
#include <fstream>

//$'\n' https://stackoverflow.com/a/11966402/13653221

void	do_replace(std::fstream &argv_status, std::fstream &replace_status, std::string &old_file, std::string &old_str, std::string &new_str)
{
	int			length_buf;
	int			pos;
	int			size_diff;
	std::size_t	find_pos;

	argv_status.seekg(0, argv_status.end);
	length_buf = argv_status.tellg();
	
	char *buffer = new char [length_buf];

	pos = 0;
	size_diff = 0;
	argv_status.seekg(0, argv_status.beg);
	argv_status.read(buffer, length_buf);
	if (!argv_status) {
		std::cout << "not all characters from " << old_file << " can be read" << std::endl;
	}
	else {
		std::string	buf(buffer);
		while (1)
		{
			find_pos = buf.find(old_str, pos);
			if (find_pos == std::string::npos) {
				if (pos == 0) {
					std::cout << "No matches were found" << std::endl;
				}
				break ;
			}
			buf.erase(find_pos, old_str.length());
			buf.insert(find_pos, new_str);
			if (old_str.length() < new_str.length()) { // >
				find_pos += new_str.length();
			}
			else {
				find_pos += new_str.length();
			}
			pos = find_pos;
		}
		replace_status.write(buf.c_str(), buf.length()); 
	}
	argv_status.close();
	replace_status.close();
	delete [] buffer;
	return ;
}

int	main(int argc, char **argv)
{
	std::fstream	argv_status;
	std::fstream	replace_status;
	
	if (argc != 4)
		std::cout << "wrong number of arguments" << std::endl;
	else if (!*argv[2] || !*argv[3])
		std::cout << "bad arguments: srtrings can't be empty (read subject)" << std::endl;
	else {
		argv_status.open(argv[1], std::fstream::in);
		if (!argv_status.is_open()) {
			std::cout << "file " << argv[1] << " doesn't exist" << std::endl;
		}
		else {
			std::string		new_file(argv[1]);
			std::string		old_file(argv[1]);
			std::string		old_str(argv[2]);
			std::string		new_str(argv[3]);

			for (int i = 0; argv[1][i]; i++) {
				new_file[i] = toupper(argv[1][i]);
			}
			new_file += ".replace";
			replace_status.open(new_file, std::fstream::out | std::fstream::trunc);
			if (!replace_status.is_open()) {
				std::cout << "can't create file " << new_file << std::endl;
				argv_status.close();
			}
			else {
				do_replace(argv_status, replace_status, old_file, old_str, new_str);
			}
		}
	}
	return (0);
}