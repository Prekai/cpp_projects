#include <iostream>

using namespace std;

int main()
{
	int counter {10};
    int result {0};
    
    //first example
//    cout << "Counter: " << counter << endl;
//    
//    counter= counter +1;
//    cout << "Counter: " << counter << endl;
//    
//    counter++;
//    cout << "Counter: " << counter << endl;
//    
//    ++counter;
//    cout << "Counter: " << counter << endl;
    
    //second example preincrement
//    cout << "Counter: " << counter << endl;
//    result= ++counter; //Note the pre increment
//    cout << "Counter: " <<counter << endl;
//    cout << "Result: " << result << endl;
//    

    //third example post increment
//    cout << "Counter: " << counter << endl;
//    result= counter++; //Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
    //fourth example
//     cout << "Counter: " << counter << endl;
//     result= ++ counter + 10; //Note the pre increment
//     cout << "Counter: " << counter << endl;
//     cout << "Result: " << result << endl;
     
    //fifth example
    cout << "Counter: " << counter << endl;
    result= counter++ + 10; // Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
	return 0;
}
