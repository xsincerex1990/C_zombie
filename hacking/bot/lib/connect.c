#include "connect.h"

int execute (int s, char *cmd) {
  //FILE must be controlled through pointer 
  FILE *f = //use popen to run the command locally
  if (!f) return -1;
  while (!feof (f)) {
    //parse through "f" line by line and send any output to master
  }
  fclose(f);
  return 0;
}

int parse (int s, char *msg, char* name) {
  char *target = msg;

  // check wether the msg was targetted for this client if not then silently drop the packet by returning 0
  
  char cmd = strchr(msg, ':');
  if (cmd == NULL) {
    printf("Incorrect formatting reference: TARGET: command");
    return -1;
  }


  //adjust command pointer to the start of the actual command 
  // adjust the terminated character to the end of the command 
  // print a local statement detailing what command was received

  execute (s, cmd);
  return 0;
}

int init_channel (char *ip, int port, char *name) {
  char msg[CMD_LENGTH];
  struct sockaddr_in server;

  server.sin_addr.s_addr == // convert the ip to network byte order  
  server.sin_family = // set servers communication domain
  server.sin_port = // convert port to network byte order

  int channel = //define a SOCK_STREAM socket

  if (channel < 0) {
    perror ("Socket:");
    exit(1);
  } 

  int (connection_status < 0) {
    perror ("Connect:");
    exit(1);
  }

  //send a greeting message back to master by loading a string into msg (Use printf)
  respond (channel, msg);
  return channel;
}