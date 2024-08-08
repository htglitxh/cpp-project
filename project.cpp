#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();
        }

};

class Details
{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"Enter the customer Id:"<<endl;
            cin>>cId;
            cout<<"Enter the name:"<<endl;
            cin>>name;
            cout<<"Enter the gender:"<<endl;
            cin>>gender;
            cout<<"Enter the phone number:"<<endl;
            cin>>phoneNo;
            cout<<"Enter the age:"<<endl;
            cin>>age;
            cout<<"You have entered the required details!!!\n"<<endl;        
        }
};

int Details :: cId;
string Details :: name;
string Details :: gender;

class Registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"UAE","Canada","UK","USA","Australia","Germany"};

            for(int i=0;i<6;i++){
                cout<<(i+1)<<" is flight to:"<<flightN[i]<<endl;
            
            }

            cout<<"Welcome to the Airlines!"<<endl;
            cout<<"Press the number equivalent to the country you want to book flight of:";
            cin>>choice;

            switch(choice)
            {
                    case 1:
                    {
                        cout<<"______________Welcome to Air Emirates____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. Dubai - Airbus A350"<<endl;
                        cout<<"\t10-08-2024 9:00 3hrs Rs.100000"<<endl;
                        cout<<"2. Abu Dhabi - Airbus A320"<<endl;
                        cout<<"\t10-08-2024 15:00 4hrs Rs.120000"<<endl;
                        cout<<"3. Sharjaah - Boeing 777"<<endl;
                        cout<<"\t10-08-2024 11:00 4hrs Rs.130000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=100000;
                            cout<<"You have successfully booked the flight to Dubai"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=120000;
                            cout<<"You have successfully booked the flight to Abu Dhabi"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==3){
                            charges=130000;
                            cout<<"You have successfully booked the flight to Sharjaah"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }
                case 2:
                    {
                        cout<<"______________Welcome to Air Canada____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. Toronto - Airbus A350"<<endl;
                        cout<<"\t10-08-2024 9:00 12hrs Rs.1000000"<<endl;
                        cout<<"2. Montreal - Airbus A320"<<endl;
                        cout<<"\t10-08-2024 15:00 13hrs Rs.1200000"<<endl;
                        cout<<"3. Vancouver - Boeing 777"<<endl;
                        cout<<"\t10-08-2024 11:00 14hrs Rs.1300000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=1000000;
                            cout<<"You have successfully booked the flight to Toronto"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=1200000;
                            cout<<"You have successfully booked the flight to Montreal"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==3){
                            charges=1300000;
                            cout<<"You have successfully booked the flight to Vancouver"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }
                case 3:
                    {
                        cout<<"______________Welcome to British Airways____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. London - Airbus A350"<<endl;
                        cout<<"\t10-08-2024 5:00 8hrs Rs.500000"<<endl;
                        cout<<"2. Manchester - Airbus A320"<<endl;
                        cout<<"\t10-08-2024 21:00 9hrs Rs.600000"<<endl;
                        cout<<"3. Birmingham - Boeing 777"<<endl;
                        cout<<"\t10-08-2024 19:00 10hrs Rs.700000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=500000;
                            cout<<"You have successfully booked the flight to London"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=600000;
                            cout<<"You have successfully booked the flight to Manchester"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==3){
                            charges=700000;
                            cout<<"You have successfully booked the flight to Birmingham"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }    
                case 4:
                    {
                        cout<<"______________Welcome to Delta Air____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. San Fran - Airbus A350"<<endl;
                        cout<<"\t10-08-2024 9:00 15hrs Rs.900000"<<endl;
                        cout<<"2. Atlanta - Airbus A320"<<endl;
                        cout<<"\t10-08-2024 6:00 16hrs Rs.800000"<<endl;
                        cout<<"3. Pittsburgh - Boeing 777"<<endl;
                        cout<<"\t10-08-2024 4:00 10hrs Rs.500000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=900000;
                            cout<<"You have successfully booked the flight to San Fran"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=800000;
                            cout<<"You have successfully booked the flight to Atlanta"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==3){
                            charges=500000;
                            cout<<"You have successfully booked the flight to Pitssburgh"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }
                case 5:
                    {
                        cout<<"______________Welcome to Quantas____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. Melbourne - Airbus A350"<<endl;
                        cout<<"\t10-08-2024 7:00 12hrs Rs.890000"<<endl;
                        cout<<"2. Perth - Airbus A320"<<endl;
                        cout<<"\t10-08-2024 00:00 10hrs Rs.790000"<<endl;
                        cout<<"3. Brisbane - Boeing 777X"<<endl;
                        cout<<"\t10-08-2024 23:00 8hrs Rs.690000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=890000;
                            cout<<"You have successfully booked the flight to Melbourne"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=790000;
                            cout<<"You have successfully booked the flight to Perth"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==3){
                            charges=690000;
                            cout<<"You have successfully booked the flight to Brisbane"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }
                case 6:
                    {
                        cout<<"______________Welcome to Nazi Air____________\n"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. Berlin - Airbus A380"<<endl;
                        cout<<"\t10-08-2024 18:00 10hrs Rs.200000"<<endl;
                        cout<<"2. Frankfurt - Boeing 727"<<endl;
                        cout<<"\t11-08-2024 9:00 10hrs Rs.250000"<<endl;                        
                        
                        cout<<"Select the flight you want to book:"<<endl;
                        cin>>choice1;

                        if(choice1==1){
                            charges=200000;
                            cout<<"You have successfully booked the flight to Berlin"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                        else if(choice1==2){
                            charges=250000;
                            cout<<"You have successfully booked the flight to Frankfurt"<<endl;
                            cout<<"You have been redirected to the menu and collect the ticket"<<endl;
                        }
                       
                        else{
                            cout<<"Invalid,redirected to previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go to main menu"<<endl;
                        cin>>back;
                        if(back==1)
                        mainMenu();
                        else 
                        mainMenu();

                        break;
                    }
                    default:
                    {
                        cout<<"Invalid input,Redirecting you to the main menu:"<<endl;
                        mainMenu();
                        break;
                    }
            }
        }
};

float Registration :: charges;
int Registration :: choice;

class Ticket : public Registration,Details
{
    public:
        void bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"____________Mile High Club Flights____________"<<endl;
                outf<<"_____________________Ticket___________________"<<endl;
                outf<<"______________________________________________"<<endl;

                outf<<"Customer Id:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\t Description"<<endl<<endl;

                if(Registration::choice==1)
                {
                    destination="UAE";
                }
                else if(Registration::choice==2)
                {
                    destination="Canada";
                }
                else if(Registration::choice==3)
                {
                    destination="UK";
                }
                else if(Registration::choice==4)
                {
                    destination="USA";
                }
                else if(Registration::choice==5)
                {
                    destination="Australia";
                }
                else if(Registration::choice==6)
                {
                    destination="Germany";
                }
                outf<<"Destination:\t"<<destination<<endl;
                outf<<"Flight cost:\t"<<Registration::charges<<endl;
            }
            outf.close();
        }
        void display()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t             Mile High Club Flights \n"<<endl;
    cout<<"\t_____________________Main Menu_____________________ "<<endl;

    cout<<"\t_______________________________________________________"<<endl;
    cout<<"\n"<<endl;

    cout<<"\t| Press 1 to add Passenger Information |"<<endl;
    cout<<"\t| Press 2 for Flight Registration |"<<endl;
    cout<<"\t| Press 3 for Ticket |"<<endl;
    cout<<"\t| Press 4 to exit |"<<endl;
    cout<<"\n";
    cout<<"\t________________________________________________________"<<endl;

    cout<<"Enter the choice:";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice)
    {
        
        case 1:
        {
            cout<<"_________Customers________"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu\n";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"__________Book a flight__________\n"<<endl;
            r.flights();
            break;
        } 

        case 3:
        {
            cout<<"_________Get Your Ticket__________\n"<<endl;
            t.bill();

            cout<<"Your ticket is ready, collect via mail \n"<<endl;
            cout<<"Press 1 to display your ticket"<<endl;

            cin>>back;

                if(back==1){
                    t.display();
                    cout<<"Press any key to go back to main menu:";
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                        mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
        }

        case 4:
            {
                cout<<"\n___________Thank you__________"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid key, Please try keys (1-4)!!!\n"<<endl;
                mainMenu();
                break;
            }
    }

}

int main(){
    Management Mobj;
    return 0;
}


