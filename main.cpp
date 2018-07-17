/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on July 6, 2018, 12:59 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int sel;
    char name[50];
    
  
    
    printf("Welecome to ________.\n1) Begin your Journey \n2) Continue your Journey \n3) Options \n0) Exit\n");
    
    scanf("%d", &sel);
    
    if( sel == 1)
    {
        cout << "What is your name?\n";
        cin >> name;
        
         cout << "\n"<<name<< " begins his Journey in a small town known as Cedar.\n"
                "You are 19 years old and you are currently enrolled in university life.\n"
                "When you are not at school you live with your wealthy parents "
                "in their Pent house.\n"; 
         
         cout << "\nYou wake up on a warm gloomy day with excitement in your eyes\n"
                 "as you have plans to explore the city with your friends.";
      
    }
        else if( sel == 2 )
    {
            printf("Please enter the file name to load:");
    }
        else if( sel == 3 )
    {
        
    }
        else if( sel ==0 )
    {
          printf("Closing application.");
    }
    
      
    
    
    
         
    
    
    class Joe {
        
        double health;
        
        double damage;
        
        double fear;
        
        
    };

    return 0;
}

