/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:53:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/08 16:12:52 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ClapTrap.hpp"
#include <sstream>

ClapTrap::ClapTrap(const str name ): name(name), HitPoint(100), EnergPoint(50), AttackDamage(20){
    cout << FIGHTER_MSG << name << FIGHTER_MSG2 << endl;                         
};                                                                               
                                                                                 
ClapTrap::~ClapTrap(){                                                           
    cout << FIGHTER_MSG << this->name <<  FIGHTER_MSG3 << endl;                  
}                                                                                
                                                                                 
void ClapTrap::attack(const std::string &target)                                 
{                                                                                
	std::ostringstream ss;
	ss << this->AttackDamage;
	cout << FIGHTER_MSG                                                         
          << this->name                                                          
          << ((this->HitPoint > 0 && this->EnergPoint)                           
              ? " attacks " + target + ", causing " + ss.str() +" points of damage!"   
              : " can’t attack because it’s out of energy or destroyed!")        
          << endl;                                                          
}                                                                                
                                                                                   
void ClapTrap::takeDamage(unsigned int amount)                                                      
{
		std::ostringstream ss;
		ss << this->HitPoint;
          this->HitPoint -= amount;                                                
          cout << FIGHTER_MSG << this->name << " takes "  << amount
               << " Piont of damage " <<  " Remaining HP " + ss.str()
               << endl;                                                            
          if(this->HitPoint <= 0) cout << FIGHTER_MSG << this->name << " has been destroyed" << endl; 
}

void ClapTrap::beRepaired(unsigned int amount)                                   
{                 
		  std::ostringstream ss;
          if(this->EnergPoint > 0 && this->HitPoint > 0)                           
          {                                                                        
                  this->HitPoint += amount;                                        
				  ss << this->HitPoint;
                  this->EnergPoint++;                                              
                  cout << FIGHTER_MSG << this->name << " repairs itself, restoring " + ss.str() + "hit point" << endl;
          }                                                                        
          else cout << FIGHTER_MSG << this->name + " can't repair, no energy left" << endl;
  }  
