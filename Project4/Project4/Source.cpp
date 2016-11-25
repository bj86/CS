#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

string const inText1 = "Foten är en kroppsdel som förekommer mycket i våra uttryck.";
string const inText2 = "På stående fot betyder omedelbart, utan förberedelse.";
string const inText3 = "Försätta på fri fot betyder att ge någon friheten.";
string const inText4 = "Sätta foten i munnen betyder att göra bort sig.";
string const inText5 = "Få om bakfoten betyder att missuppfatta något.";
string const inText6 = "Skrapa med foten betyder att visa sig underdånig eller ödmjuk.";
string const inText7 = "Stryka på foten betyder att tvingas ge upp.";
string const inText8 = "Leva på stor fot betyder att föra ett dyrbart eller slösaktigt leverne.";
string const inText9 = "Varför fick du foten???";

string final_string = "\n" + inText1 + "\n" + inText2 + "\n" + inText3 + "\n" + inText4 + "\n" + inText5
+ "\n" + inText6 + "\n" + inText7 + "\n" + inText8 + "\n" + inText9 + "\n";

string word;
size_t pos;
int i;

int main() {
	
	// Set variables to replace upper case "Fot".
	word = "Fot";
	pos = final_string.find(word);

	// .find() returns the position of the first character to last character found. 
	// I set < 1000 because I noticed that it never passed 1000 when printed to console.  
	while (pos < 1000) {
		final_string.replace(pos, word.length(), "Hand");
		pos = final_string.find(word);
		i++;
	}
	// Reset Variables to replace lowercase "fot".
	word = "fot";
	pos = final_string.find(word);

	while (pos < 1000) {
		final_string.replace(pos, word.length(), "hand");
		pos = final_string.find(word);
		i++;
	}
	cout << pos << " " << i << endl;
	cout << final_string << endl;

	system("Pause");
}