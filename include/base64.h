#pragma once

int b64_ntop(unsigned char const *src, size_t srclength, char *target, size_t targsize);

int b64_pton(char const *src, unsigned char *target, size_t targsize);

