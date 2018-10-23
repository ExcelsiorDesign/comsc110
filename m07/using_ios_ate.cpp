#include <fstream>

using namespace std;

int main(){
	const char* filename = "test.txt";
	
	//just build a little sample file
	ofstream sampleFile(filename);
	sampleFile << "This is a sample content\n";
	sampleFile.close();

	//declare a new file object for appending and "overwriting"...
	fstream file(filename, ios::ate | ios::out | ios::in);

	//...mark the current position...
	long changePos = file.tellp();
	file << "This text will be changed\n";

	//..append something else
	file << "Append some other text";

	//...overwrite previous contents
	file.seekp(changePos);
	file << "changed text ";
	file.close();
	return 0;
}