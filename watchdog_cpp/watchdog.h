int main();
/*char process_check[] = "ps afx | grep "dpi-engine" | grep -v grep";
*/
bool isRunning(const char* name)
{
	char command[32];
	sprintf(command, "pgrep %s > /dev/null", name);
	return 0 == system(command);
}