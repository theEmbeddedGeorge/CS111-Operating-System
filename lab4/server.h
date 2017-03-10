#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>

typedef struct {
	int sockfd;
	char ip_addr_str[INET_ADDRSTRLEN];
	int port;
} CONNECTION;

void get_ip_addr(char ip_addr_str[], struct sockaddr_in* connection_addr);

int server_error(const char *msg);
CONNECTION* server_init(int portno, int timeout_seconds);
CONNECTION* server_accept_connection(int server_socket_fd);