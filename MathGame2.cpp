#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

float Area2D(int choice, float l=0, float b=0){
    float pi = 3.14;
    switch(choice){
    case 1:
    return l*l;
    case 2:
    return l*b;
    case 3:
    return 0.5*l*b;
    case 4:
    return pi*l*l;
    default: 
    return -1;
}
}

float Area3D(int choose, float r=0, float l=0, float b=0, float h=0){
    float pi = 3.14;
    switch(choose){
    case 1:
    return 6*l*l;
    case 2:
    return 2*(l*b + b*h + h*l);
    case 3:
    return 2*pi*r*(r+h);
    case 4:
    return pi*r*(l+r);
    case 5: 
    return 4*pi*r*r;
    case 6:
    return 3*pi*r*r;
    default: 
    return-1;
}
}

float Volume3D(int choose, float r=0, float l=0, float b=0, float h=0){
    float pi = 3.14; 
    switch(choose){
    case 1:
    return l*l*l;
    case 2: 
    return l*b*h;
    case 3: 
    return pi*r*r*h;
    case 4:
    return (1.0/3)*pi*r*r*h;
    case 5:
    return (4.0/3)*pi*r*r*r;
    case 6:
    return (2.0/3)*pi*r*r*r;
    default: 
    return-1;
}
}

int main(){
    while(true){ 
        string shape, end;
        cout<<"Welcome to Maths Game 2"<<endl<<"(Enter exit to end the program or Enter any word to continue)"<<endl;
        cin>>end;
        if(end == "Exit" || end == "exit"){
            cout<<"Thank you for playing this game. Hope you enjoyed"<<endl;
            break;
        }    
        cout<<"Do you want to choose a 3D shape or a 2D shape?"<<endl;
        cin>>shape;
        if(shape == "2D" || shape == "2d"){
            float l, b;
            int choice; 
            cout<<"Choose a shape to find the area"<<endl<<"(Enter 1 for Square, 2 for Rectangle, 3 for Triangle, 4 for Circle)"<<endl;
            cin>>choice;
            switch(choice){
                case 1: cout<<"Enter the side"<<endl; cin>>l;
                        cout<<"The area of Square is "<<Area2D(1, l)<<" m^2"<<endl; break;
                case 2: cout<<"Enter the length"<<endl; cin>>l; cout<<"Enter the breadth"<<endl; cin>>b;
                        cout<<"The area of the Rectangle is "<<Area2D(2, l, b)<<" m^2"<<endl; break;
                case 3: cout<<"Enter the base"<<endl; cin>>l; cout<<"Enter the height"<<endl; cin>>b; 
                        cout<<"The area of the Triangle is "<<Area2D(3, l, b)<<" m^2"<<endl; break;
                case 4: cout<<"Enter the radius"<<endl; cin>>l;
                        cout<<"The area of the Circle is "<<Area2D(4, l)<<" m^2"<<endl; break;
            }
        }
        else if(shape == "3D" || shape == "3d"){
            string find;
            int choose;
            float l, b, r, h;
            cout<<"Choose a shape to find it's Area/Volume"<<endl<<"(Press 1 for Cube, 2 for Cuboid, 3 for Cylinder, 4 for Cone, 5 for Sphere, 6 for Hemisphere)"<<endl;
            cin>>choose;
            cout<<"Do you want to find the Area or the Volume"<<endl; cin>>find;
            if(find == "Area" || find == "area"){
                switch(choose){ 
                    case 1: cout<<"Enter the side"<<endl; cin>>l;
                            cout<<"The area of the Cube is "<<Area3D(1, 0, l)<<" m^2"<<endl; break;
                    case 2: cout<<"Enter the length"<<endl; cin>>l; cout<<"Enter the breadth"<<endl; cin>>b; cout<<"Enter the height"<<endl; cin>>h;
                            cout<<"The area of the Cuboid is "<<Area3D(2, 0, l, b, h)<<" m^2"<<endl; break;
                    case 3: cout<<"Enter the radius"<<endl; cin>>r; cout<<"Enter the height"<<endl; cin>>h;
                            cout<<"The area of the Cylinder is "<<Area3D(3, r, 0, 0, h)<<" m^2"<<endl; break;
                    case 4: cout<<"Enter the radius"<<endl; cin>>r; cout<<"Enter the slant height"<<endl; cin>>l;
                            cout<<"The area of the Cone is "<<Area3D(4, r, l)<<" m^2"<<endl; break;
                    case 5: cout<<"Enter the radius"<<endl; cin>>r;
                            cout<<"The area of the Sphere is "<<Area3D(5, r)<<" m^2"<<endl; break;
                    case 6: cout<<"Enter the radius"<<endl; cin>>r;
                            cout<<"The area of the Hemisphere is "<<Area3D(6, r)<<" m^2"<<endl; break;
                }
            }
            else if(find == "Volume" || find == "volume"){
                switch(choose){
                    case 1: cout<<"Enter the side"<<endl; cin>>l; 
                            cout<<"The volume of the Cube is "<<Volume3D(1, 0, l)<<" m^3"<<endl; break;
                    case 2: cout<<"Enter the length"<<endl; cin>>l; cout<<"Enter the breadth"<<endl; cin>>b; cout<<"Enter the height"<<endl; cin>>h;
                            cout<<"The volume of the Cuboid is "<<Volume3D(2, 0,  l, b, h)<<" m^3"<<endl; break;
                    case 3: cout<<"Enter the radius"<<endl; cin>>r; cout<<"Enter the height"<<endl; cin>>h;
                            cout<<"The volume of the Cylinder is "<<Volume3D(3, r, 0, 0, h)<<" m^3"<<endl; break;
                    case 4: cout<<"Enter the radius"<<endl; cin>>r; cout<<"Enter the height"<<endl; cin>>h;
                            cout<<"The volume of the Cone is "<<Volume3D(4, r, 0, 0, h)<<" m^3"<<endl; break;
                    case 5: cout<<"Enter the radius"<<endl; cin>>r;
                            cout<<"The volume of the Sphere is "<<Volume3D(5, r)<<" m^3"<<endl; break;
                    case 6: cout<<"Enter the radius"<<endl; cin>>r;
                            cout<<"The volume of the Hemisphere is "<<Volume3D(6, r)<<" m^3"<<endl; break;
                }
            }
        }
    }
    return 0;
}
