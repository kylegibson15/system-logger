#include "file_writer.h"

FILE *open_log_file(char *file_path)
{
  FILE *fp fopen(file_path, "a");
  return fp;
}

void write_log_to_file(FILE *file, unsigned long long free_memory)
{
  if (file)
  {
    fprintf(file, "free_memory=%llu\n", free_memory);
  }
}

void close_log_file(FILE *file)
{
  if (file)
  {
    fclose(file);
  }
}