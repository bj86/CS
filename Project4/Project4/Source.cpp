#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

string const inText1 = "Foten �r en kroppsdel som f�rekommer mycket i v�ra uttryck.";
string const inText2 = "P� st�ende fot betyder omedelbart, utan f�rberedelse.";
string const inText3 = "F�rs�tta p� fri fot betyder att ge n�gon friheten.";
string const inText4 = "S�tta foten i munnen betyder att g�ra bort sig.";
string const inText5 = "F� om bakfoten betyder att missuppfatta n�got.";
string const inText6 = "Skrapa med foten betyder att visa sig underd�nig eller �dmjuk.";
string const inText7 = "Stryka p� foten betyder att tvingas ge upp.";
string const inText8 = "Leva p� stor fot betyder att f�ra ett dyrbart eller sl�saktigt leverne.";
string const inText9 = "Varf�r fick du foten???";

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