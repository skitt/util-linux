#ifndef UTIL_LINUX_SELINUX_UTILS_H
#define UTIL_LINUX_SELINUX_UTILS_H

extern int ul_setfscreatecon_from_file(char *orig_file);
extern int ul_selinux_has_access(const char *classstr, const char *perm, char **user_cxt);

#endif
