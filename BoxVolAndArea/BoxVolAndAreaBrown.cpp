//Aleksander Brown
//alekjbrown@live.com
//june 04, 2020

#include<iostream>
using namespace std;

int main()
{
    int length;
    int width;
    int height;
    int volume;
    int area;

    cout << "Input box length" << endl;
    cin >> length;
    cout << "Input box width" << endl;
    cin >> width;
    cout << "Input box height" << endl;
    cin >> height;

    volume = length * width * height;
    area = 2*(height * width) + 2*(height * length) + 2*(width * length);

    cout << "Box size: " << length << " x " << width << " x " << height << endl;
    cout << "Volume = " << volume << endl;
    cout << "Surface Area = " << area << endl;

    return 0;
}

// INPUT         OUTPUT
// 10, 10, 10    1000,600