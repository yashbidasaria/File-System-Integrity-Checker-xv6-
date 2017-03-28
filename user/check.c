#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int
main (int argc, char *argv[]) 
{
  int fd = open("foo", O_CREATE|O_CHECKED);
  printf(1, "%d\n", fd);
  exit();
}
