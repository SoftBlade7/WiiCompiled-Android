#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A66E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A66E0;

loc_801A66E0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
}

loc_801A66E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_801A670C;
    }
}

loc_801A66EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_801A66F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A67BC;
    }
}

loc_801A66F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A67E8;
    }
}

loc_801A66F8:
{
}

loc_801A66FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_801A677C;
    }
}

loc_801A6700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6704:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A672C;
    }
}

loc_801A6708:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A670C:
{
}

loc_801A6710:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_801A6720;
    }
}

loc_801A6714:
{
}

loc_801A6718:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(15))) {
        goto loc_801A6870;
    }
}

loc_801A671C:
{
    goto loc_801A682C;
}

loc_801A6720:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(28));
}

loc_801A6724:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_801A6728:
{
    goto loc_801A68A4;
}

loc_801A672C:
{
    r0 = (r4 & -2147483648);
}

loc_801A6730:
{
    r5 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A673C;
    }
}

loc_801A6738:
{
    r5 = (r5 | 1);
}

loc_801A673C:
{
    r0 = (r4 & 1073741824);
}

loc_801A6740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6748;
    }
}

loc_801A6744:
{
    r5 = (r5 | 2);
}

loc_801A6748:
{
    r0 = (r4 & 536870912);
}

loc_801A674C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6754;
    }
}

loc_801A6750:
{
    r5 = (r5 | 4);
}

loc_801A6754:
{
    r0 = (r4 & 268435456);
}

loc_801A6758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6760;
    }
}

loc_801A675C:
{
    r5 = (r5 | 8);
}

loc_801A6760:
{
    r0 = (r4 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A676C;
    }
}

loc_801A6768:
{
    r5 = (r5 | 16);
}

loc_801A676C:
{
    r4 = -872415232;
    r3 = (r3 & 134217727);
    MemoryInline::FlatWrite16((r4 + 16412), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A677C:
{
    r5 = -872415232;
    r0 = (r4 & 67108864);
}

loc_801A6784:
{
    r5 = MemoryInline::FlatRead16((r5 + 20490));
    r5 = (r5 & -505);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6794;
    }
}

loc_801A6790:
{
    r5 = (r5 | 16);
}

loc_801A6794:
{
    r0 = (r4 & 33554432);
}

loc_801A6798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A67A0;
    }
}

loc_801A679C:
{
    r5 = (r5 | 64);
}

loc_801A67A0:
{
    r0 = (r4 & 16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A67A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A67AC;
    }
}

loc_801A67A8:
{
    r5 = (r5 | 256);
}

loc_801A67AC:
{
    r4 = -872415232;
    r3 = (r3 & -117440513);
    MemoryInline::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A67BC:
{
    r0 = (r4 & 8388608);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A67C0:
{
    r4 = -855638016;
    r5 = MemoryInline::FlatRead32((r4 + 27648));
    r0 = -45;
    r5 = (r5 & r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A67D8;
    }
}

loc_801A67D4:
{
    r5 = (r5 | 4);
}

loc_801A67D8:
{
    r4 = -855638016;
    r3 = (r3 & -8388609);
    MemoryInline::FlatWrite32((r4 + 27648), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A67E8:
{
    r0 = (r4 & 4194304);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A67EC:
{
    r5 = -855638016;
    r5 = MemoryInline::FlatRead32((r5 + 26624));
    r0 = -11280;
    r5 = (r5 & r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A6804;
    }
}

loc_801A6800:
{
    r5 = (r5 | 1);
}

loc_801A6804:
{
    r0 = (r4 & 2097152);
}

loc_801A6808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6810;
    }
}

loc_801A680C:
{
    r5 = (r5 | 4);
}

loc_801A6810:
{
    r0 = (r4 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A681C;
    }
}

loc_801A6818:
{
    r5 = (r5 | 1024);
}

loc_801A681C:
{
    r4 = -855638016;
    r3 = (r3 & -7340033);
    MemoryInline::FlatWrite32((r4 + 26624), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A682C:
{
    r0 = (r4 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6830:
{
    r5 = -855638016;
    r5 = MemoryInline::FlatRead32((r5 + 26644));
    r0 = -3088;
    r5 = (r5 & r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A6848;
    }
}

loc_801A6844:
{
    r5 = (r5 | 1);
}

loc_801A6848:
{
    r0 = (r4 & 262144);
}

loc_801A684C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6854;
    }
}

loc_801A6850:
{
    r5 = (r5 | 4);
}

loc_801A6854:
{
    r0 = (r4 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6858:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A6860;
    }
}

loc_801A685C:
{
    r5 = (r5 | 1024);
}

loc_801A6860:
{
    r4 = -855638016;
    r3 = (r3 & -917505);
    MemoryInline::FlatWrite32((r4 + 26644), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A6870:
{
    r5 = -855638016;
    r0 = (r4 & 65536);
}

loc_801A6878:
{
    r5 = MemoryInline::FlatRead32((r5 + 26664));
    r5 = (r5 & -16);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6888;
    }
}

loc_801A6884:
{
    r5 = (r5 | 1);
}

loc_801A6888:
{
    r0 = (r4 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A688C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A6894;
    }
}

loc_801A6890:
{
    r5 = (r5 | 4);
}

loc_801A6894:
{
    r4 = -855638016;
    r3 = (r3 & -98305);
    MemoryInline::FlatWrite32((r4 + 26664), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A68A4:
{
    r0 = (r4 & 16384);
}

loc_801A68A8:
{
    r5 = 240;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68B4;
    }
}

loc_801A68B0:
{
    r5 = (r5 | 2048);
}

loc_801A68B4:
{
    r0 = (r4 & 2048);
}

loc_801A68B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68C0;
    }
}

loc_801A68BC:
{
    r5 = (r5 | 8);
}

loc_801A68C0:
{
    r0 = (r4 & 1024);
}

loc_801A68C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68CC;
    }
}

loc_801A68C8:
{
    r5 = (r5 | 4);
}

loc_801A68CC:
{
    r0 = (r4 & 512);
}

loc_801A68D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68D8;
    }
}

loc_801A68D4:
{
    r5 = (r5 | 2);
}

loc_801A68D8:
{
    r0 = (r4 & 256);
}

loc_801A68DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68E4;
    }
}

loc_801A68E0:
{
    r5 = (r5 | 1);
}

loc_801A68E4:
{
    r0 = (r4 & 128);
}

loc_801A68E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68F0;
    }
}

loc_801A68EC:
{
    r5 = (r5 | 256);
}

loc_801A68F0:
{
    r0 = (r4 & 64);
}

loc_801A68F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A68FC;
    }
}

loc_801A68F8:
{
    r5 = (r5 | 4096);
}

loc_801A68FC:
{
    r0 = (r4 & 8192);
}

loc_801A6900:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6908;
    }
}

loc_801A6904:
{
    r5 = (r5 | 512);
}

loc_801A6908:
{
    r0 = (r4 & 4096);
}

loc_801A690C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6914;
    }
}

loc_801A6910:
{
    r5 = (r5 | 1024);
}

loc_801A6914:
{
    r0 = (r4 & 32);
}

loc_801A6918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A6920;
    }
}

loc_801A691C:
{
    r5 = (r5 | 8192);
}

loc_801A6920:
{
    r0 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6924:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A692C;
    }
}

loc_801A6928:
{
    r5 = (r5 | 16384);
}

loc_801A692C:
{
    r4 = -872415232;
    r3 = (r3 & -32753);
    MemoryInline::FlatWrite32((r4 + 12292), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A66E0 func_801A66E0 preserves=true fpr_mask=0x00000000
