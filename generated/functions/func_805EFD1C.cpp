#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EFD1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

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

    goto loc_805EFD1C;

loc_805EFD1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
    r7 = 1;
    r11 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFDB0;
    }
}

loc_805EFD30:
{
    r6 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r6 & r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EFD44;
    }
}

loc_805EFD3C:
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805EFD44:
{
    r0 = 5;
    r10 = 0;
    r9 = 0;
    r4 = 0;
    ctr = r0;
}

loc_805EFD58:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r0 = (r6 & r8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EFD88;
    }
}

loc_805EFD64:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EFD88;
    }
}

loc_805EFD74:
{
    r5 = (r5 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 84));
}

loc_805EFD80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805EFD88;
    }
}

loc_805EFD84:
{
    r10 = (r10 | r8);
}

loc_805EFD88:
{
    r9 = (r9 + 1);
    r4 = (r4 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EFD58;
    }
}

loc_805EFD94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_805EFD98:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFDA8;
    }
}

loc_805EFDA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r11));
}

loc_805EFDA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805EFDA8:
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805EFDB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = (r0 & r11);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EFD1C func_805EFD1C preserves=true fpr_mask=0x00000000
