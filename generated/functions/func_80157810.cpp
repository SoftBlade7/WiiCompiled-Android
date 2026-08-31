#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80157810(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80157810;

loc_80157810:
{
    r4 = 0x80340000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80157818:
{
    r4 = (r4 + -24768);
    r10 = (r4 + 4644);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157830;
    }
}

loc_80157824:
{
    r4 = MemoryInline::FlatRead16((r4 + 4642));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015782C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80157850;
    }
}

loc_80157830:
{
    r4 = 0x80340000u;
    r0 = 0;
    r4 = (r4 + -24768);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r4 + 4642), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 4636), r0);
    MemoryInline::FlatWriteRam8((r4 + 4640), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80157850:
{
    r9 = 0;
    goto loc_80157910;
}

loc_80157858:
{
    r0 = MemoryInline::FlatRead32(r10);
}

loc_80157860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80157908;
    }
}

loc_80157864:
{
    r5 = 0x80340000u;
    r7 = 83;
    r5 = (r5 + -24768);
    goto loc_801578D0;
}

loc_80157874:
{
    r8 = (r10 + -4);
    r6 = (r10 + 660);
    ctr = r7;
}

loc_80157880:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r8 + 4), r4);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157880;
    }
}

loc_80157894:
{
    r8 = 0;
    goto loc_801578B8;
}

loc_8015789C:
{
    r0 = (r8 & 65535);
    r8 = (r8 + 1);
    r0 = (r0 * 12);
    r6 = (r10 + r0);
    r4 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r4 + -664);
    MemoryInline::FlatWrite32((r6 + 16), r0);
}

loc_801578B8:
{
    r0 = MemoryInline::FlatRead16((r10 + 8));
    r4 = (r8 & 65535);
}

loc_801578C4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8015789C;
    }
}

loc_801578C8:
{
    r9 = (r9 + 1);
    r10 = (r10 + 664);
}

loc_801578D0:
{
    r4 = MemoryInline::FlatRead16((r5 + 4642));
    r0 = (r9 & 65535);
}

loc_801578DC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80157874;
    }
}

loc_801578E0:
{
    r0 = MemoryInline::FlatRead32((r5 + 4636));
    r4 = (r4 + -1);
    MemoryInline::FlatWriteRam16((r5 + 4642), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801578F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80157900;
    }
}

loc_801578F4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r5 + 4636), r0);
    MemoryInline::FlatWriteRam8((r5 + 4640), static_cast<uint8_t>(r0));
}

loc_80157900:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80157908:
{
    r9 = (r9 + 1);
    r10 = (r10 + 664);
}

loc_80157910:
{
    r0 = (r9 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80157918:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80157858;
    }
}

loc_8015791C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80157810 func_80157810 preserves=true fpr_mask=0x00000000
