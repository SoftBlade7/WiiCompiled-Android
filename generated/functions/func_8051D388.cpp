#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051D388(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051D388;

loc_8051D388:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -1380646912);
}

loc_8051D3AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(18244))) {
        goto loc_8051D3B8;
    }
}

loc_8051D3B0:
{
    r0 = 0;
    goto loc_8051D428;
}

loc_8051D3B8:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & 63);
}

loc_8051D3C4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(36))) {
        goto loc_8051D3D0;
    }
}

loc_8051D3C8:
{
    r0 = 0;
    goto loc_8051D428;
}

loc_8051D3D0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0 = (r0_rot_2 & 63);
}

loc_8051D3D8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(48))) {
        goto loc_8051D3E4;
    }
}

loc_8051D3DC:
{
    r0 = 0;
    goto loc_8051D428;
}

loc_8051D3E4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r0 = (r0_rot_3 & 127);
}

loc_8051D3EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051D3F8;
    }
}

loc_8051D3F0:
{
    r0 = 0;
    goto loc_8051D428;
}

loc_8051D3F8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & 31);
}

loc_8051D400:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(31))) {
        goto loc_8051D40C;
    }
}

loc_8051D404:
{
    r0 = 0;
    goto loc_8051D428;
}

loc_8051D40C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r5 = (r5_rot_1 & 15);
    r4 = 12;
    r0 = (12 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = (r4 | ~r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_8051D428:
{
}

loc_8051D42C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051D438;
    }
}

loc_8051D430:
{
    r0 = 0;
    goto loc_8051D48C;
}

loc_8051D438:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8051D444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051D470;
    }
}

loc_8051D448:
{
    r4 = MemoryInline::FlatRead32((r3 + 136));
    r3 = r31;
    r30 = (r4 + 140);
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1CA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r31_addr_1 = (r31 + r30);
    r0 = MemoryInline::FlatRead32(r31_addr_1);
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_9 & 134217727);
    goto loc_8051D48C;
}

loc_8051D470:
{
    r3 = r31;
    r4 = 10236;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1CA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r31 + 10236));
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_10 & 134217727);
}

loc_8051D48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051D490:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051D49C;
    }
}

loc_8051D494:
{
    r3 = 0;
    goto loc_8051D4BC;
}

loc_8051D49C:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8051D4A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051D4B8;
    }
}

loc_8051D4AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 136));
    r3 = (r3 + 144);
    goto loc_8051D4BC;
}

loc_8051D4B8:
{
    r3 = 10240;
}

loc_8051D4BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FB gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051D388 func_8051D388 preserves=true fpr_mask=0x00000000
