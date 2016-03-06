//
//  main.cpp
//  getinfo
//
//  Created by sunhongyin on 16/3/6.
//  Copyright © 2016年 sunhongyin. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are tow more. ";
    
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots. " << endl;
    
    return 0;
}
