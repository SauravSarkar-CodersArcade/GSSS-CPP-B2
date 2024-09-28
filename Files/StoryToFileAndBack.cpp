#include <iostream>
#include <fstream>
using namespace std;
void writeStoryToFile(const string& story, const string& filename){
    ofstream outFile(filename);
    if (!outFile){
        cout << "Error opening file for writing..!!" << endl;
    }
    for (char ch : story){
        outFile << (int) ch << ' ';
    }
    outFile.close();
}
string readStoryFromFile(const string& filename){
    ifstream inFile(filename);
    if (!inFile){
        cout << "Error opening file for reading..!!" << endl;
        return "";
    }
    string story;
    int asciiCode;
    while (inFile >> asciiCode){
        story += (char) asciiCode;
    }
    inFile.close();
    return story;
}
int main() {
    string story = "A simple story.\n";
    string  filename = "C:\\Users\\Saurav\\CLionProjects\\GSSS-SEP-CSE-B2-CPP\\Files\\story.txt";
    writeStoryToFile(story, filename);
    string retrievedStory = readStoryFromFile(filename);
    cout << "Retrieved Story: " << retrievedStory << endl;
    return 0;
}
