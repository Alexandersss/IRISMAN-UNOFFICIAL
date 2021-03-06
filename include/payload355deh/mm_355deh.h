#ifndef MM_355DEH_H
#define MM_355DEH_H

int mm_insert_htab_entry_355deh(uint64_t va_addr, uint64_t lpar_addr, uint64_t prot, uint64_t *index);
int mm_map_lpar_memory_region_355deh(uint64_t lpar_start_addr, uint64_t ea_start_addr, uint64_t size, uint64_t page_shift, uint64_t prot);

#endif
