#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

int main(int argc, char** argv) {
	if (argc < 2) {
		char fileContents[2048];
		int count = 1;
		while(count > 0) {
			count = read(0, fileContents, 2048);
			for (int i = 0; i < count; i++) {
				fileContents[i] = toupper(fileContents[i]);
			}
			write(1, fileContents, count);
		}
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		int fileDesc = open(argv[i], O_RDWR);	
		char fileContents[2048];
		int count = 1;
		while(count > 0) {
			count = read(fileDesc, fileContents, 2048);
			for (int i = 0; i < count; i++) {
				fileContents[i] = toupper(fileContents[i]);
			}
			write(1, fileContents, count);
		}
	}
}