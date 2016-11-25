#include <iostream>
#include <string>
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