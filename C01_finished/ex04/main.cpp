/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:39:44 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 15:41:05 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (ft_error(INVALID_ARGS), 1);
    if (open_files_and_check_error(av))
  	return (ft_error(OPEN_FILE), 1);
    return 0;
}

