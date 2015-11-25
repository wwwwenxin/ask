//
//  main.cpp
//  WX
//
//  Created by wx on 15/11/25.
//  Copyright © 2015年 wx. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    bool  b=true;
    while( b )
    {
        cout<<"Is it rainning now？请输入'Y'或者‘N’";
        char c;
        cin>>c;
        switch(c)
        {
            case 'Y':
                cout<<"It is rainning now "<<endl;
                b=false;
                break;
            case 'N':
                cout<<"It is not rainning now"<<endl;
                b=false;
                break;
            default:
                cout<<"It is wrong that you input!"<<endl;
        }
    }
    return 0;
}
