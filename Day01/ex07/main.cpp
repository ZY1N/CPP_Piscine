/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:19:12 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/23 12:19:17 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void    replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   readFile(filename);
    std::string     line;
    std::string     whatsinfile;
    std::string     outputfile;

    if (readFile.fail())
    {
        std::cout << "File not found" << std::endl;
        exit(1);
    }
    while(std::getline(readFile, line))
    {
        while (line.find(s1) != std::string::npos)
        {
            line.replace(line.find(s1), s1.length(), s2);
        }
        whatsinfile = whatsinfile + line + "\n";
    }
    outputfile = filename + ".replace";
    std::ofstream    outFile(outputfile);
    outFile << whatsinfile;
    readFile.close();
    outFile.close();
}

int     main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;

    if(argc == 4)
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        replace(filename, s1, s2);
        std::cout << "Done" << std::endl;
    }
    else
        std::cout<< "Use: Enter filename, s1, s2" << std::endl;
}
