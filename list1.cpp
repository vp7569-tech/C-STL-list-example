// C++ STL list example

#include <iostream>
#include<conio.h>
#include <list>

using namespace std;

int main(void)
{

list<char> elem; // list container for character elements
char chs;

cout<<"elem list is: ";

for(chs ='a'; chs <= 'z'; ++chs) // append elements from 'a' to 'z'
elem.push_back(chs);

// while there are elements, print and remove the element

while(!elem.empty())
{
cout<<elem.front()<<' ';
elem.pop_front();
getch();
}

cout<<endl;

return 0;

}
