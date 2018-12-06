struct ReservedRegion {
    unsigned int BS_jmpBoot;
    char[8] BS_OEMName;
    short BPB_BytsPerSec;
    short BPB_SecPerClus;
    short BPB_RsvdSecCnt;
    short BPB_NumFATs;
    short BPB_FATSz32;
    short BPB_RootClus;
    unsigned int BPB_RootEntCnt;
    unsigned int BPB_TotSec16;
    unsigned int BPB_Media;
    unsigned int BPB_FATSz16;
    unsigned int BPB_SecPerTrk;
    unsigned int BPB_NumHeads;
    unsigned int BPB_HiddSec;
    unsigned int BPB_TotSec32;
    unsigned int BPB_ExtFlags;
    unsigned int BPB_FSInfo;
    unsigned int BPB_BkBootSec;
    unsigned int BPB_Reserved;
    unsigned int BS_DrvNum;
    unsigned int BS_BootSig;
    unsigned int BS_VolID;
    unsigned int BS_VolLab;
    char[8] BS_FilSysType;
};

typedef struct FAT32Image {
    struct ReservedRegion;
};
