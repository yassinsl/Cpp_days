/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:33:08 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 15:45:51 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>
#include <fstream>

#define INVALID_ARGS "Error: Invalid Arguments\n"
#define OPEN_FILE "Cannot Open File\n"
#define cerr std::cerr
typedef std::string str;

void ft_error(str msg);
int open_files_and_check_error(char **av);
