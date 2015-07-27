#include <sys/types.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
#include <dirent.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int getProcIdByName(string procName)
{
	int pid = -1;

	// Open the /proc directory
	DIR *dp = opendir("/proc");
	if (dp != NULL)
	{
		// Enumerate all entries in directory until process found
		struct dirent *dirp;
		while (pid < 0 && (dirp = readdir(dp)))
		{
			// Skip non-numeric entries
			int id = atoi(dirp->d_name);
			if (id > 0)
			{
				// Read contents of virtual /proc/{pid}/cmdline file
				string cmdPath = string("/proc/") + dirp->d_name + "/cmdline";
				ifstream cmdFile(cmdPath.c_str());
				string cmdLine;
				getline(cmdFile, cmdLine);
				if (!cmdLine.empty())
				{
					// Keep first cmdline item which contains the program path
					size_t pos = cmdLine.find('\0');
					if (pos != string::npos)
						cmdLine = cmdLine.substr(0, pos);
					// Keep program name only, removing the path
					pos = cmdLine.rfind('/');
					if (pos != string::npos)
						cmdLine = cmdLine.substr(pos + 1);
					// Compare against requested process name
					if (procName == cmdLine)
						pid = id;
				}
			}
		}
	}
	closedir(dp);
	return pid;
}

int main(int argc, char* argv[])
{
	// Fancy command line processing skipped for brevity
	int pid = getProcIdByName(argv[1]);
	cout << "pid: " << pid << endl;
	return 0;
}