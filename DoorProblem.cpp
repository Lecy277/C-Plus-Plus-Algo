#include <iostream>
using namespace std;

int main()
{   int doors, persons,closed=0,open=0, openGreaterThanDoors=0,ClosedGreterThanDoors=0;
    cout<<"Enter the number of doors: ";
    cin>>doors;
    cout<<"Enter the number of persons: ";
    cin>>persons;
    if(doors<=persons)
    {
        for(int i=1; i*i<=doors; i++)
        {
            open++;
            closed=doors-i;
        }
        cout<<open<<" Doors are open!"<<endl;
        cout<<closed<<" Doors are closed!"<<endl;
    }
    else
    {
        for(int i=1; i*i<=doors; i++)
        {
            if(i*i<=persons)
            {
                open++;
                closed=persons-i;
            }
            else
            {
                ClosedGreterThanDoors++;
                openGreaterThanDoors++;
                openGreaterThanDoors=(doors-persons)-openGreaterThanDoors;
            }
        }
        cout<<open+openGreaterThanDoors<<" Doors are open!"<<endl;
        cout<<closed+ClosedGreterThanDoors<<" Doors are closed!"<<endl;
    }
}

