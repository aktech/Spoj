/* Spoj Problem Solution: SAMER08F (in C++) */
/*
 *  Copyright (C) 2000-2014  Amit Kumar <dtu.amit@gmail.com> <www.iamit.in>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,squares;
    while(1){
        cin >> n;
        if(n == 0)
        	break;
        squares = (n*(n+1)*(2*n+1)) / 6;
        cout << squares <<endl;
    }

    return 0;
}
