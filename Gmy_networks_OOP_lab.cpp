#include <bits/stdc++.h>
using namespace std;

// Structure to represent a member
struct Member
{
    int ID;
    double Height;
    double Weight;
};

void displayMenu()
{
    cout << "\n********** Main Menu ********\n";
    cout << "1. Add Member\n";
    cout << "2. Update Member\n";
    cout << "3. Remove Member\n";
    cout << "4. Max Height & Weight\n";
    cout << "5. Min Height and Weight\n";
    cout << "6. Average Height and Weight\n";
    cout << "7. BMI Classification\n";
    cout << "8. Exit\n";
}

void addMember(vector<Member> &members)
{
    Member newMember;
    cout << "Enter Member ID: ";
    cin >> newMember.ID;
    cout << "Enter Height (m): ";
    cin >> newMember.Height;
    cout << "Enter Weight (Kg): ";
    cin >> newMember.Weight;
    members.push_back(newMember);
    cout << "Successfully Added\n";
}

void updateMember(vector<Member> &members)
{
    int memberId;
    cout << "Enter the ID of the member to update: ";
    cin >> memberId;

    for (int i = 0; i < members.size(); ++i)
    {
        if (members[i].ID == memberId)
        {
            int r;
            cout << "Press 0 for Height change Or";
            cout << " 1 for  Weight change Or";
            cout << " 2 for both change  : ";
            cin >> r;

            if (r == 0)
            {
                cout << "Old height : " << members[i].Height << endl;
                cout << "Enter new Height (m): ";
                cin >> members[i].Height;
                cout << "Member information updated successfully.\n";
                return;
            }

            else if (r == 1)
            {
                cout << "Old Weight : " << members[i].Weight << endl;
                cout << "Enter new Weight (Kg): ";
                cin >> members[i].Weight;
                cout << "Member information updated successfully.\n";
                return;
            }

            else if (r == 2)
            {

                cout << "Old height : " << members[i].Height << endl;
                cout << "Enter new Height (m): ";
                cin >> members[i].Height;
                cout << "Old Weight : " << members[i].Weight << endl;
                cout << "Enter new Weight (Kg): ";
                cin >> members[i].Weight;
                cout << "Member information updated successfully.\n";
                return;
        
            }
        }
    }

    cout << "Member with ID " << memberId << " not found.\n";
}

void removeMember(vector<Member> &members)
{
    int memberId;
    cout << "Enter the ID of the member to remove: ";
    cin >> memberId;

    for (int i = 0; i < members.size(); ++i)
    {
        if (members[i].ID == memberId)
        {
            members.erase(members.begin() + i);
            cout << "Member with ID " << memberId << " removed successfully.\n";
            return;
        }
    }

    cout << "Member with ID " << memberId << " not found.\n";
}

void maxHeightAndWeight(vector<Member> &members)
{
    double maxHeight = members[0].Height;
    double maxWeight = members[0].Weight;

    for (int i = 0; i < members.size(); i++)
    {
        if (members[i].Height > maxHeight)
        {
            maxHeight = members[i].Height;
        }
        if (members[i].Weight > maxWeight)
        {
            maxWeight = members[i].Weight;
        }
    }

    cout << "Max Height: " << maxHeight << " m\n";
    cout << "Max Weight: " << maxWeight << " Kg\n";

}

void minHeightAndWeight(vector<Member> &members)
{
    double minHeight = members[0].Height;
    double minWeight = members[0].Weight;

    for (int i = 0; i < members.size(); i++)
    {
        if (members[i].Height < minHeight)
        {
            minHeight = members[i].Height;
        }
        if (members[i].Weight < minWeight)
        {
            minWeight = members[i].Weight;
        }
    }

    cout << "Min Height: " << minHeight << " m\n";
    cout << "Min Weight: " << minWeight << " Kg\n";
    
}

void averageHeightAndWeight(vector<Member> &members)
{
    double totalHeight = 0.0;
    double totalWeight = 0.0;

    for(int i=0; i<members.size(); i++)
    {
        totalHeight += members[i].Height;
        totalWeight += members[i].Weight;
    }

    int numMembers = members.size();
    if (numMembers > 0)
    {
        double avgHeight = totalHeight / numMembers;
        double avgWeight = totalWeight / numMembers;
        cout << "Average Height: " << avgHeight << " m\n";
        cout << "Average Weight: " << avgWeight << " Kg\n";
    }
    else
    {
        cout << "No members to calculate averages.\n";
    }
}

void displayBMI(vector<Member> &members)
{
    int memberId;
    cout << "Enter Member ID: ";
    cin >> memberId;

    for (int i=0; members.size(); ++i)
    {
        if (members[i].ID == memberId)
        {
            double bmi = members[i].Weight / (members[i].Height * members[i].Height);
            cout << "BMI = " << bmi << "\n";
            if (bmi < 18.5)
            {
                cout << "Classification: Underweight\n";
            }
            else if (bmi >= 18.5 && bmi < 24.9)
            {
                cout << "Classification: Normal\n";
            }
            else if (bmi >= 25.0 && bmi < 29.9)
            {
                cout << "Classification: Overweight\n";
            }
            else
            {
                cout << "Classification: Obese\n";
            }
            return;
        }
    }

    cout << "Member with ID " << memberId << " not found.\n";
}

int main()
{
    vector<Member> members;
    int choice;
    displayMenu();

    do
    {
        cout << "Enter Your option(1-8): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addMember(members);
            break;
        case 2:
            updateMember(members);
            break;
        case 3:
            removeMember(members);
            break;
        case 4:
            maxHeightAndWeight(members);
            break;
        case 5:
            minHeightAndWeight(members);
            break;
        case 6:
            averageHeightAndWeight(members);
            break;
        case 7:
            displayBMI(members);
            break;
        case 8:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
            break;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        cin.get();  // Wait for user to press Enter to continue

    } while (choice != 8);

    return 0;
}
