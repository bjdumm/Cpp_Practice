#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
#define PORT 8000

int main() {

	std::cout << PORT;
	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = { 0 };
	std::string hello = "Hello from server";

	if (3 == 3) {
		perror("You blew it.");
		exit(EXIT_FAILURE);
	}

	return 0;
}
