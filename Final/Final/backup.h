#pragma once
// Creating a local string to work with. This is going to get ugly.
ifstream myFile("dict.txt");
string tempStr, line;
// Added linebreak to keep track of persons.
while (getline(myFile, line))
{
	tempStr += line + "\n";
}
myFile.close();
// Done with the file, now we need to split the string.
// Need to create something that counts how many persons.
int linebreak = 0;
for (int i = 0; i < tempStr.length(); i++) {
	if (tempStr[i] == '\n') {
		linebreak++;
	}
}
cout << linebreak << endl;
// So now we know how many times we need to split.
int i = 0;
for (i, tempStr; i < tempStr.length(); i++) {
	if (tempStr[i] == '|') {
		break;
	}
	if (tempStr[i] == '\n') {

	}
}


for (int i = 0; i < linebreak; i++) {
	temp2.firstName = tmpVec1[j];
	temp2.lastName = tmpVec1[k];
	temp2.sig = tmpVec1[l];
	temp2.height = stof(tmpVec1[g]);
	tmpVec2.push_back(temp2);
}