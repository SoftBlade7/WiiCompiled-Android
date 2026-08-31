#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052F788(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052F788;

loc_8052F788:
{
    r0 = 3;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    r11 = 0;
    ctr = r0;
}

loc_8052F7A0:
{
    r0 = (r11 & 255);
    r0 = (r0 * 240);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_8052F7B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F7D8;
    }
}

loc_8052F7B8:
{
}

loc_8052F7BC:
{
    r8 = (r8 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052F7D8;
    }
}

loc_8052F7C4:
{
}

loc_8052F7C8:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(4))) {
        goto loc_8052F7D4;
    }
}

loc_8052F7CC:
{
    r0 = (r9 + 1);
    r9 = (r0 & 255);
}

loc_8052F7D4:
{
    r10 = (r10 + 1);
}

loc_8052F7D8:
{
    r11 = (r11 + 1);
    r0 = (r11 & 255);
    r0 = (r0 * 240);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_8052F7F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F814;
    }
}

loc_8052F7F4:
{
}

loc_8052F7F8:
{
    r8 = (r8 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052F814;
    }
}

loc_8052F800:
{
}

loc_8052F804:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(4))) {
        goto loc_8052F810;
    }
}

loc_8052F808:
{
    r0 = (r9 + 1);
    r9 = (r0 & 255);
}

loc_8052F810:
{
    r10 = (r10 + 1);
}

loc_8052F814:
{
    r11 = (r11 + 1);
    r0 = (r11 & 255);
    r0 = (r0 * 240);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_8052F82C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F850;
    }
}

loc_8052F830:
{
}

loc_8052F834:
{
    r8 = (r8 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052F850;
    }
}

loc_8052F83C:
{
}

loc_8052F840:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(4))) {
        goto loc_8052F84C;
    }
}

loc_8052F844:
{
    r0 = (r9 + 1);
    r9 = (r0 & 255);
}

loc_8052F84C:
{
    r10 = (r10 + 1);
}

loc_8052F850:
{
    r11 = (r11 + 1);
    r0 = (r11 & 255);
    r0 = (r0 * 240);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_8052F868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F88C;
    }
}

loc_8052F86C:
{
}

loc_8052F870:
{
    r8 = (r8 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052F88C;
    }
}

loc_8052F878:
{
}

loc_8052F87C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(4))) {
        goto loc_8052F888;
    }
}

loc_8052F880:
{
    r0 = (r9 + 1);
    r9 = (r0 & 255);
}

loc_8052F888:
{
    r10 = (r10 + 1);
}

loc_8052F88C:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F7A0;
    }
}

loc_8052F894:
{
}

loc_8052F898:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8052F8A0;
    }
}

loc_8052F89C:
{
    r9 = 1;
}

loc_8052F8A0:
{
}

loc_8052F8A4:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(3))) {
        goto loc_8052F8AC;
    }
}

loc_8052F8A8:
{
    r9 = 4;
}

loc_8052F8AC:
{
    r7 = MemoryInline::FlatRead32((r3 + 2900));
}

loc_8052F8B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(2))) {
        goto loc_8052F8C0;
    }
}

loc_8052F8B8:
{
    r9 = 1;
    goto loc_8052F8DC;
}

loc_8052F8C0:
{
}

loc_8052F8C4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(3))) {
        goto loc_8052F8D0;
    }
}

loc_8052F8C8:
{
    r9 = 2;
    goto loc_8052F8DC;
}

loc_8052F8D0:
{
}

loc_8052F8D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(4))) {
        goto loc_8052F8DC;
    }
}

loc_8052F8D8:
{
    r9 = 4;
}

loc_8052F8DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 2896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8052F8E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F914;
    }
}

loc_8052F8E8:
{
}

loc_8052F8EC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(7))) {
        goto loc_8052F904;
    }
}

loc_8052F8F0:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8052F8F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052F914;
    }
}

loc_8052F8FC:
{
    r8 = 3;
    goto loc_8052F914;
}

loc_8052F904:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_8052F90C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052F914;
    }
}

loc_8052F910:
{
    r8 = 6;
}

loc_8052F914:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r10));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000F81 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052F788 func_8052F788 preserves=true fpr_mask=0x00000000
