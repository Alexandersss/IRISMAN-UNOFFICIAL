// Defines for PS3 4.55
#define strncmp                     0x4D8D8 //done
#define strcpy                      0x4D884 //done
#define strlen                      0x4D8AC //done
#define alloc                       0x643B4 //done
#define free                        0x647F0 //done

#define memory_patch_func           0x29F770  //done
//#define pathdup_from_user           0x1b1dc4
#define open_mapping_table_ext      0x7fff00                                                                                                                                           

/* Common Symbols PL3 */

#define memcpy                      0x7E488 //done
#define memset                      0x4D6D8 //done

#define perm_patch_func             0x3560
#define perm_var_offset             -0x7FF8

#define BASE        0x3D90
#define BASE2        (0x3D90+0x400)  // 0x4290  // pincha en -> 1B5070 (syscall 838)

