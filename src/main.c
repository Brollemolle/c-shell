#include <cstdint>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_INIT_SIZE 256

void csh_loop(void);
char *csh_readline(void);
char **csh_format_args(char *line);
uint8_t csh_exec(char **args);

int main(int argc, char *argv[]) {
  // Maybe config here for future expantion

  // Shell superloop
  csh_loop();

  return 0;
}

void csh_loop(void) {
  char *line;
  char **args;
  uint8_t status = 1;

  while (status) {

    line = csh_readline();
    args = csh_format_args(line);
    status = csh_exec(args);

    free(line);
    free(args);
  }
}

char *csh_readline(void) {
  char *buffer = malloc(sizeof(char) * BUFFER_INIT_SIZE);
  if (buffer == NULL) {
    printf("buffer allocation failed\n");
    exit(-1);
  }

  uint32_t n_char = 0;
  uint32_t buff_size = BUFFER_INIT_SIZE;

  while (1) {
    printf("> ");
    char ch = getchar();
    if (ch == EOF || ch == '\n') {
      ch = '\0';
    }

    buffer[n_char++] = ch;

    if (n_char == buff_size - 1) {
      // TODO: Continue here, resize buffer...
    }
  }
}
