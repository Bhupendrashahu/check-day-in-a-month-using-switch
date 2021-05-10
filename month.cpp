#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no of month \n";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"january is 31";
			break;
	    case 2:
	    	cout<<"feburary is 29";
	    	break;
	    case 3:
	    	cout<<"march is 31";
	    	break;
	    case 4:
	    	cout<<"april is 30";
	    	break;
	    case 5:
			cout<<"may is 31";
			break;
	    case 6:
	    	cout<<"june is 30";
	    	break;
	    case 7:
	    	cout<<"july is 31";
	    	break;
	    case 8:
	    	cout<<"august is 31";
	    	break;
	   	case 9:
	    	cout<<"september is 30";
	    	break;
	    case 10:
	    	cout<<"octuber is 31";
	    case 11:
			cout<<"navamber is 30";
			break;
	    case 12:
	    	cout<<"december is 31";
	    	break;
	    	default:
	    	cout<<"the wrong no ";
	    	
	   
	}
}
