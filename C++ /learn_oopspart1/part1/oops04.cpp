// C++ Program to show how to Create a Class with Getter and 
// Setter Methods 
#include <iostream> 
using namespace std; 
class GFG { 
private: 
	int length; 
	int width; 

public: 
	// Constructor 
	GFG(int len, int wid) 
	{ 
		length = len; 
		width = wid; 
	} 

	// Getter methods 
	int getLength() const { return length; } 
	int getWidth() const { return width; } 

	// Setter methods 
	void setLength(int len) { length = len; } 
	void setWidth(int wid) { width = wid; } 
}; 

// Driver Code 
int main() 
{ 
	// Create an object of Rectangle class 
	GFG rect(5, 3); 
	cout << "Length: " << rect.getLength() << endl; 
	cout << "Width: " << rect.getWidth() << endl; 
	// Use setter methods to modify member variables 
	rect.setLength(7); 
	rect.setWidth(4); 
	// Display updated values 
	cout << "Updated Length: " << rect.getLength() << endl; 
	cout << "Updated Width: " << rect.getWidth() << endl; 
	return 0; 
}
 