#include<iostream>
#include<math.h>
using namespace std;

void decToBinary(int n)
{
    int binaryNum[50];
    int i = 0;
    while (n > 0) 
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}

void decToHexa(int n)
{
    int hexadecimalNum[50];
    cout << "Hexadecimal number: " << hex << n << endl;
   
 
}


void decToOctal(int n)
{
   
   int octalNum[20];
   cout<< oct << n << endl;
}

int main(){
    int choice, num;
    cout << "To which number system you want to convert the number:" << endl;
    cout<<"--------------------------------------------------"<<endl;
    cout << "1. Binary" << endl;
    cout << "2. Hexadecimal" << endl;
    cout << "3. Octal" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<":";
			}
			else
            cout << "Converting to binary..." << endl;
            decToBinary(num);
            break;
        case 2:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<"Please enter a positive number:";
			}
            else
            cout << "Converting to hexadecimal..." << endl;
            decToHexa(num);
            break;
        case 3:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<"Please enter a positive number:";
			}
			else
            cout << "Converting to octal..." << endl;
            decToOctal(num);
            break;
        default:
            cout << "Please enter a valid choice!! " << endl;
    }
    int a;
    do{
	cout<<"Want to convert another number?"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cin>> a;

    switch(a){
    	case 1:
    		cout << "To which number system you want to convert the number:" << endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout << "1. Binary" << endl;
    cout << "2. Hexadecimal" << endl;
    cout << "3. Octal" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<":";
			}
			else
            cout << "Converting to binary..." << endl;
            decToBinary(num);
            break;
        case 2:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<"Please enter a positive number:";
			}
            else
            cout << "Converting to hexadecimal..." << endl;
            decToHexa(num);
            break;
        case 3:
            cout << "Enter the number: ";
            cin >> num;
            if(num<0){
            	cout<<"Please enter a positive number:";
			}
			else
            cout << "Converting to octal..." << endl;
            decToOctal(num);
            break;
        default:
            cout << "Please enter a valid choice!! " << endl;
    }
    break;
case 2:
    	cout<<"Thanks for visiting!!"<<endl;
    	break;
    	case 3:
    		cout<<"wrong selection!!"<<endl;
}}
while(a==1);
  cout<<"Visit again!!"  ;
	
  
    return 0;
}


