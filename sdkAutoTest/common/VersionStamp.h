#ifndef VERSIONSTAMP_H
#define VERSIONSTAMP_H
#define PIXEL_MAKE_STR1(a) #a
#define PIXEL_MAKE_STR(a) PIXEL_MAKE_STR1(a)
const char* GetVersion();
int GetVersionMajor();
int GetVersionMinor();
int GetVersionFix();
int aacac();

#endif