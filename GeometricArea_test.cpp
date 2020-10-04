
#include <iostream>
#include "GeometricArea.h"
using namespace std;

int main(){
    char play;// variable for y or n
    int sides;// variable number of sides
    bool agian = false;// if not true continue the loop
    int lengths[4];// stors the lengths of the sides
    do
    {
        cout << "Enter the number sides:";
        cin >> sides;// gets number of side you pick
        if (sides == 0){// if 0 side you will use the circle function
            cout << "Enter the dimension of side 1:"; 
            cin >> lengths[0];//gets the radius 
            cout << circle(lengths[0]) << endl;// calculats the area
        } else if(sides == 3){// if 3 side you will use the triangle function
            cout << "Enter the dimension of side 1:"; 
            cin >> lengths[0];//gets length of a side 
            cout << "Enter the dimension of side 2:"; 
            cin >> lengths[1];//gets length of a side 
            cout << "Enter the dimension of side 3:"; 
            cin >> lengths[2];//gets length of a side 
            cout << triangle(lengths[0], lengths[1], lengths[2]) << endl;// calculats the area
        }else if(sides == 4){// if 4 side you will use the four side polygon function
            cout << "Enter the dimension of side 1:"; 
            cin >> lengths[0];//gets length of a side 
            cout << "Enter the dimension of side 2:"; 
            cin >> lengths[1];//gets length of a side 
            cout << "Enter the dimension of side 3:"; 
            cin >> lengths[2];//gets length of a side 
            cout << "Enter the dimension of side 3:"; 
            cin >> lengths[3];//gets length of a side 
            cout << FourSidePolygon(lengths[0], lengths[1], lengths[2], lengths[3]) << endl;// calculats the area
        } else {// if not 0,3, or 4 print "not good"
            cout << "not good input!\n";
        }
        cout << "Go again? (y/n)";
        cin >> play;// get input to play agian
        if (play == 'n'){//if n make agian true and break the loop
            agian = true;
        }
    } while (!agian);//if agian not true continue
    
    return 0;
}
