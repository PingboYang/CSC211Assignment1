#include <iostream>
using namespace std;
#include<math.h>

void minOrMax() {
    int numOne;
    int numTwo;
    cout <<"Please enter number one: ";
    cin >> numOne;
    cout << "Please enter number two: ";
    cin >> numTwo;
    if(numOne>numTwo){
        cout << "Number one:("<<numOne<<")is larger"<<endl<<"Number two:("<<numTwo<<") is smaller";
    }else{
        cout << "Number two:("<<numTwo<<") is larger"<<endl<<"Number one:("<<numOne<<")is smaller";
    }
}
void romanNum(){
    int i;
    string romanNumber;
    cout <<"Please enter a number between 1-10:";
    cin>> i;
    while(i<1||i>10){
        cout <<"The number has to between 1-10:";
        cin>>i;
    }
    switch(i){
        case 1:
            cout<<"The roman number of "<<i<<" is (I)"<<endl;
            break;
        case 2:
            cout<<"The roman number of "<<i<<" is (II)"<<endl;
            break;
        case 3:
            cout<<"The roman number of "<<i<<" is (III)"<<endl;
            break;
        case 4:
            cout<<"The roman number of "<<i<<" is (IV)"<<endl;
            break;
        case 5:
            cout<<"The roman number of "<<i<<" is (V)"<<endl;
            break;
        case 6:
            cout<<"The roman number of "<<i<<" is (VI)"<<endl;
            break;
        case 7:
            cout<<"The roman number of "<<i<<" is (VII)"<<endl;
            break;
        case 8:
            cout<<"The roman number of "<<i<<" is (VIII)"<<endl;
            break;
        case 9:
            cout<<"The roman number of "<<i<<" is (IX)"<<endl;
            break;
        case 10:
            cout<<"The roman number of "<<i<<" is (X)"<<endl;
            break;
    }
}
void magic(){
    int month;
    int day;
    int year;
    int product;
    cout<<"Please enter a month of the day: ";
    cin>>month;
    cout<<"Please enter a day of the day: ";
    cin>>day;
    cout<<"Please enter a year of the day(the year should be two-digit): ";
    cin>>year;
    while(year>99){
        cout<<"The year should be the last two-digit: ";
        cin>>year;
    }
    product=month*day;
    if(product=year){
        cout<<"The date is magic.";
    }else{
        cout<<"The date is not magic.";
    }
}
void rectangles(){
    int length1;
    int length2;
    int width1;
    int width2;
    int area1;
    int area2;
    cout<<"Please enter rectangle1's length";
    cin>>length1;
    cout<<"Please enter rectangle1's width";
    cin>>width1;
    cout<<"Please enter rectangle2's length";
    cin>>length2;
    cout<<"Please enter rectangle2's width";
    cin>>width2;
    area1=length1*width1;
    area2=length2*width2;
    cout<<"area1 is "<<area1<<endl<<"area2 is "<<area2<<endl;
    if(area1==area2){
        cout<<"They have same areas.";
    }else if(area1<area2){
        cout<<"Rectangle2's area is greater than Rectangle1.";
    }else{
        cout<<"Rectangle1's area is greater than Rectangle2.";
    }
}
void bodyMassIndex(){
    int weight;
    int height;

    cout<<"Please enter your weight: ";
    cin>>weight;
    cout<<"Please enter your height: ";
    cin>>height;
    int BMI=weight*703/pow(height,2);
    cout<<"Your BMI is "<<BMI<<"."<<endl;
    if(BMI<18.5){
        cout<<"You are underweight.";
    }else if(BMI>25){
        cout<<"You are overweight.";
    }else{
        cout<<"You have optimal weight.";
    }
}

int main(){
    minOrMax();
    romanNum();
    magic();
    rectangles();
    bodyMassIndex();
}



