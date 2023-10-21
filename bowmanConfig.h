typedef struct {
    char* name;
    char* files_folder;
    char* ip;
    int port;
} ClientConfig;


ClientConfig readConfigFile(int fd_config);

void printConfigFile(ClientConfig client_config);

void printInitMsg(char* username);