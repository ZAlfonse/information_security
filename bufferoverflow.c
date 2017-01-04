#include <stdio.h>
#include <strings.h>

int main(int argc, char *argv[]) {
  int allow_login = 0;
  char pwdstr[12];
  char targetpwd[12] = "MyPwd123";

  // `gets` will write past the 12 bytes we allocated for pwdstr if the string is larger
  gets(pwdstr);

  if(strncmp(pwdstr, targetpwd, 12) == 0)
    allow_login = 1;

  if(allow_login == 0)
    printf("Login request rejected");
  else
    printf("Login request allowed");
}
