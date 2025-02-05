#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class CSVHandler {

    
public:
    void create(const std::string& filename, const std::vector<std::vector<std::string>>& data) {
        std::ofstream file(filename);
        for (const auto& row : data) {
            for (size_t i = 0; i < row.size(); ++i) {
                file << row[i];
                if (i < row.size() - 1) file << ",";
            }
            file << "\n";
        }
        file.close();
    }

    void read(const std::string& filename) {
        std::ifstream file(filename);
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }

    void update(const std::string& filename, const std::vector<std::vector<std::string>>& data) {
        create(filename, data);
    }

    void deleteRow(const std::string& filename, int rowToDelete) {
        std::ifstream file(filename);
        std::vector<std::string> lines;
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();

        lines.erase(lines.begin() + rowToDelete);

        std::ofstream outFile(filename);
        for (const auto& l : lines) {
            outFile << l << "\n";
        }
        outFile.close();
    }
};

int main() {
    CSVHandler csvHandler;
    std::vector<std::vector<std::string>> data = {{"Name", "Age", "City"}, {"Alice", "30", "New York"}, {"Bob", "25", "Los Angeles"}};

    csvHandler.create("data.csv", data);
    csvHandler.read("data.csv");
    data[1][1] = "31"; // Update age of Alice
    csvHandler.update("data.csv", data);
    csvHandler.deleteRow("data.csv", 1); // Delete Bob's row

    return 0;
}
