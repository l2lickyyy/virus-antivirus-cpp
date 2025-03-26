## virus-antivirus-cpp
A research project simulating malware (file infectors, worms, trojans, polymorphic viruses) and an antivirus with detection heuristics.

### Features
- **Malware Types**:
  - File Infector: Injects payload into `.exe` files.
  - Worm: Self-replicates across directories.
  - Trojan: Simulates keylogging.
  - Polymorphic Virus: Encrypts payload with dynamic keys.
- **Anti-Malware**:
  - Signature-based scanning.
  - Entropy-based heuristic analysis.
  - Real-time directory monitoring.

### Build Instructions
1. Clone the repository.
2. Configure with CMake:
   ```bash
   mkdir build && cd build
   cmake ..
   cmake --build .

---

### Explanation:
- **Malware**:
  - **FileInfector**: Searches for `.exe` files in a directory and appends a payload.
  - **Worm**: Copies itself to a target directory (simulated).
  - **Trojan**: Logs fake keystrokes to demonstrate stealth.
  - **PolymorphicVirus**: Encrypts payload with XOR and random keys to evade signature detection.
  
- **Anti-Malware**:
  - **Scanner**: Detects known signatures (e.g., `DECRYPTION_STUB`).
  - **HeuristicAnalyzer**: Flags files with high entropy (indicative of encryption).
  - **RealTimeMonitor**: Watches directories for new files and triggers scans.

The code uses C++17 features like `<filesystem>` for cross-platform file operations. Always test in a safe directory (e.g., `./test`) to avoid accidental system damage.