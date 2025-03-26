#include <iostream>
#include "malware/FileInfector.h"
#include "malware/Worm.h"
#include "malware/Trojan.h"
#include "malware/Polymorphic.h"
#include "anti-malware/Scanner.h"
#include "anti-malware/HeuristicAnalyser.h"
#include "anti-malware/RealTimeMonitor.h"

int main() {
    std::cout << "Starting Malware Research Project...\n";

    // simulate malware
    FileInfector infector;
    infector.infect("./test");

    Worm worm;
    worm.spread("./test");

    Trojan trojan;
    trojan.execute();

    Polymorphic polymorphic;
    polymorphic.infect("./test/sample.exe");

    // anti-malware demo
    Scanner scanner;
    HeuristicAnalyser analyser;
    RealTimeMonitor monitor;

    bool isMalicious = scanner.scanFile("./test/sample.exe");
    std::cout << "Signature scan: " << (isMalicious ? "Malware detected!" : "Clean") << "\n";

    bool highEntropy = analyser.analyseEntropy("./test/sample.exe");
    std::cout << "Heuristic analysis: " << (highEntropy ? "Suspicious!" : "Normal") << "\n";

    monitor.watchDirectory("./test", [](const std::string& file) {
        std::cout << "New file detected: " << file << " - Scanning...\n";
    });

    return 0;
}