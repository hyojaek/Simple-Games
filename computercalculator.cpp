//include library
//change code so that the program closes when the user hits enter. 

#include <iostream>
#include <cmath>

//math functions

//addition

double add(double a, double b);

double add(double a, double b){
    return a+b;
}

//subtraction

double sub(double a, double b);

double sub(double a, double b){
    return a-b;
}

//multiplication

double mult(double a, double b);

double mult(double a, double b){
    return a*b;
}

//division

double div(double a, double b);

double div(double a, double b){
    return a/b;
}

//modulo

int mod(int a, int b);

int mod(int a, int b){
    return a%b;
}

//square root

double root(double a);

double root(double a){
    a = sqrt(a);

    return a;
}

//exponents

int exp(int a, int b);

int exp(int a, int b){
    int x;
    x = pow(a, b);
    return x;
}

//logorithm (natural log (base e))

double ln(double a);

double ln(double a){
    a = log(a);
    return a;
}


int main();

int main(){

    while(true){ 
    std::cout<<" "<<std::endl;
    std::cout<<"TERMINAL CALCULATOR"<<std::endl;
    std::cout<<"1. Addition"<<std::endl;
    std::cout<<"2. Subtraction"<<std::endl;
    std::cout<<"3. Mutiplication"<<std::endl;
    std::cout<<"4. Division"<<std::endl;
    std::cout<<"5. Modulo"<<std::endl;
    std::cout<<"6. Square Root"<<std::endl;
    std::cout<<"7. Exponents"<<std::endl;
    std::cout<<"8. Natural Logorithm"<<std::endl;
    std::cout<<"9. EXIT"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"Please select one of the options above: "<<std::endl;
    int selection;
    std::cin>>selection;

    if(selection == 1){
        std::cout<<"Please enter the two values you would like to add."<<std::endl;
        std::cout<<"Enter first value: "<<std::endl;
        double a;
        std::cin>>a;
        std::cout<<"Enter second value:"<<std::endl;
        double b;
        std::cin>>b;
        std::cout<<"Calculation: "<<add(a,b)<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        getline() //fixing 
        std::string n;
        std::cin>>n;

    }else if(selection == 2){
        std::cout<<"Please enter the two values you would like to subtract."<<std::endl;
        std::cout<<"Enter first value: "<<std::endl;
        double a;
        std::cin>>a;
        std::cout<<"Enter second value:"<<std::endl;
        double b;
        std::cin>>b;
        std::cout<<"Calculation: "<<sub(a,b)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;

    }else if(selection == 3){
        std::cout<<"Please enter the two values you would like to multiply."<<std::endl;
        std::cout<<"Enter first value: "<<std::endl;
        double a;
        std::cin>>a;
        std::cout<<"Enter second value:"<<std::endl;
        double b;
        std::cin>>b;
        std::cout<<"Calculation: "<<mult(a,b)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;
        
    }else if(selection == 4){
        std::cout<<"Please enter the two values you would like to divide."<<std::endl;
        std::cout<<"Enter first value: "<<std::endl;
        double a;
        std::cin>>a;
        std::cout<<"Enter second value:"<<std::endl;
        double b;
        std::cin>>b;
        std::cout<<"Calculation: "<<div(a,b)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;
        
    }else if(selection == 5){
        std::cout<<"Please enter the two values you would like to know the remainder of."<<std::endl;
        std::cout<<"Enter first value: "<<std::endl;
        int a;
        std::cin>>a;
        std::cout<<"Enter second value:"<<std::endl;
        int b;
        std::cin>>b;
        std::cout<<"Calculation: "<<mod(a,b)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;
        
    }else if(selection == 6){
        std::cout<<"Please enter the value you would like to know the square root of."<<std::endl;
        std::cout<<"Enter value: "<<std::endl;
        int a;
        std::cin>>a;
        std::cout<<"Calculation: "<<root(a)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;
        
    }else if(selection == 7){
        std::cout<<"Please enter the two values you would like to calculate the exponent of."<<std::endl;
        std::cout<<"Enter first value (the base of the number) : "<<std::endl;
        int a;
        std::cin>>a;
        std::cout<<"Enter second value (the exponent of the number) :"<<std::endl;
        int b;
        std::cin>>b;
        std::cout<<"Calculation: "<<exp(a,b)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n;
        
    }else if(selection == 8){
        std::cout<<"Please enter the value you would like to calcualte the natural log of."<<std::endl;
        std::cout<<"Enter value: "<<std::endl;
        double a;
        std::cin>>a;
        std::cout<<"Calculation: "<<ln(a)<<std::endl;
        std::cout<<"Press the enter key to continue calculating: "<<std::endl;
        std::string n;
        std::cin>>n; 
        
    }else{
        std::cout<<"Are you sure you want to exit? If yes, please enter 1. If not, please enter 0."<<std::endl;
        int n;
        std::cin>>n;
        if(n == 1){
            break;
        }
    }

    }
         
}
