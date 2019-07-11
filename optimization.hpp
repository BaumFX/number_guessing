#ifdef NDEBUG
#pragma optimize("gsy",on)

#pragma comment(linker,"/RELEASE")

#ifdef _MERGE_RDATA_
#pragma comment(linker,"/merge:.rdata=.data")
#endif // _MERGE_RDATA_

#pragma comment(linker,"/merge:.text=.data")
#pragma comment(linker,"/merge:.reloc=.data")

#if _MSC_VER >= 1000
#pragma comment(linker,"/FILEALIGN:0x200")
#endif // _MSC_VER >= 1000

#endif // NDEBUG#pragma once
