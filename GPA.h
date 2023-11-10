#pragma once
ref class gpa{
public:
    float gp1, gp2, gp3, gp4, gp5;
    double GPA{};
    //gp refers to gradepoint, which is taken in as
    //char and later converted to an int value.
    float gpaConversion(char grade) {
        switch (grade) {
        case ('A'):
            return 4;
        case ('B'):
            return 3;
        case ('C'):
            return 2;
        case ('D'):
            return 1;
        case ('F'):
            return 0;
        default:
            return 0;
        }
        //^ takes in letter grade value and converts to number value
    }
    gpa(char a1, char a2, char a3, char a4, char a5) {//assigns number value to gp
        gp1 = float(gpaConversion(a1));
        gp2 = float(gpaConversion(a2));
        gp3 = float(gpaConversion(a3));
        gp4 = float(gpaConversion(a4));
        gp5 = float(gpaConversion(a5));
    }
    float calculateGPA(){
        return (gp1 + gp2 + gp3 + gp4+ gp5) / 5;
    }
};
