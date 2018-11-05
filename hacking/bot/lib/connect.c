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
}

int init_channel (char *ip, int port, char *name) {
  
}