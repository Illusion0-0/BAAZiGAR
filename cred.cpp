#include <bits/stdc++.h>
using namespace std;
int main(){

    bool ok=true;

    do{
        int operation;
        cout<<"-----CONTACT MANAGER-----"<<endl;
        cout<<"-----CHOOSE OPERATION TO PERFORM-----"<<endl;
        cout<<"-----1) ADD NEW CONTACT-----"<<endl;
        cout<<"-----2) SEARCH BY FIRST NAME-----"<<endl;
        cout<<"-----3) SEARCH BY LAST NAME-----"<<endl;
        cout<<"-----4) SEARCH BY PHONE NUMBER-----"<<endl;
        cout<<"-----5) PARTIAL SEARCH BY FIRST NAME-----"<<endl;
        cout<<"-----6) PARTIAL SEARCH BY LAST NAME-----"<<endl;
        cout<<"-----7) PARTIAL SEARCH BY PHONE NUMBER-----"<<endl;



        cout<<"-----5) EXIT-----"<<endl;
        cin>>operation;
        switcih(operation){
            case 1:
                cms.addContact();
                break;

            case 2:
                cms.searchByFirstName();
                break;

            case 3:
                cms.searchByLirstName();
                break;

            case 4:
                cms.searchByPhoneNumber();
                break;

            case 5:
                cms.searchByFirstNamePrefix();
            break;

            case 6:
                cms.searchByLirstNamePrefix();
            break;

            case 7:
                cms.searchByPhoneNumberPrefix();
            break;

            default:
                cout<<"Please Choose between 1 to 7"<<endl;

        }

    }
    while(ok);

}
