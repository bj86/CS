#include <iostream>
#include <string>
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

string final_string = inText1 + "\n" + inText2 + "\n" + inText3 + "\n" + inText4 + "\n" + inText5
+ "\n" + inText6 + "\n" + inText7 + "\n" + inText8 + "\n" + inText9;

string word1 = "fot", word2 = "foten", word3 = "bakfoten";
size_t found1 = final_string.find(word1), found2 = final_string.find(word2), found3 = final_string.find(word3);



int main() {

	final_string.replace(found1, 3, "hon");
	final_string.replace(found2, 5, "handen");
	final_string.replace(found3, 8, " bakhanden");
	cout << final_string << endl;


	system("Pause");

}