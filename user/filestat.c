#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
  struct stat s;
  int fd = open(argv[1], O_RDWR | O_CREATE);
  if (fd < 0) {
    printf(2, "ERROR: unable to open file.\n");
    exit();
  }

  int rc = fstat(fd, &s);
  if (rc < 0) {
    printf(2, "ERROR: fstat failed.\n");
    exit();
  }

  printf(1, "size = %d, type = %d, checksum = %d\n", s.size, s.type, s.checksum);
  exit();
}
