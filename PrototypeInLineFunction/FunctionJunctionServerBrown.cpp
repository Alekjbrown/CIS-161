//Aleksander Brown
//alekjbrown@live.com
//June 18,2020

/**this program demonstrates namespaces and in-line functions */

#include <iostream>
#include <string>
using namespace std;

//prototype for overload function
namespace FunctionJunctionServer
{
    int project(string);
}

//inline for exam return
inline int project()
{
    return 100;
}

int main()
{
    int selection = 0;  //user selection
    bool valid = false; //validation boolean
    int approved = 0;   //hold approval result
    string title = "";  //user title
    string result = ""; //hold output string for final output

    while (!valid)
    {
        //display menu and prompt for choice
        cout << "Select your preferred option for your final:" << endl;
        cout << "[1] - exam " << endl;
        cout << "[2] - project" << endl;
        if (cin >> selection && selection > 0 && selection < 3)
        {
            valid = true;
        }
        else
        {
            //clear console for reentry
            cin.clear();
            cin.ignore(80, '\n');
            cout << "Invalid entry, please enter the number corresponding to your choice from the menu." << endl;
        }
    }
    valid = false;

    //switch for selection
    switch (selection)
    {
    case 1:
        approved = project();
        result.clear();
        result.append("You will need to study " + std::to_string(approved));
        result.append(" hours for your exam.\n");
        break;
    case 2:
        cout << "Enter the title of your project" << endl;
        cin.clear();
        cin.ignore(1024,'\n');
        getline(std::cin,title,'\n');

        approved = FunctionJunctionServer::project(title);
        result.clear();
        result.append("Your project '" + title + "' returned an approval result of: ");
        result.append((approved - 1 == 0) ? "no" : "yes");
        break;
    default:
        break;
    }

    cout << result << endl;

    return 0;
}

//function for project selection, args = title
namespace FunctionJunctionServer
{
    int project(string title)
    {
        int approved;

        approved = rand() % 2 + 1;

        return approved;
    }
} // namespace FunctionJunctionServer