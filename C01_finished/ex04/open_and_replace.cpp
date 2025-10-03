/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_and_replace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:35:00 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 15:40:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void ft_error(str msg)
{
        cerr << msg;
}
int open_files_and_check_error(char **av)
{
    str line;
    size_t pos;
    std::ifstream inputFile(av[1]);
    std::ofstream outputFile((str(av[1]) + ".replace").c_str());
    str s1 = av[2];
    str s2 = av[3];

    if (!inputFile.is_open() || !outputFile.is_open())
        return 1;
    while (std::getline(inputFile, line))
    {
        while ((pos = line.find(s1)) != str::npos)
            line.erase(pos, s1.length()), line.insert(pos, s2);
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}


