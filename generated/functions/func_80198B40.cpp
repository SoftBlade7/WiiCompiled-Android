#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80198B40;

loc_80198B40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = 0;
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r6 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_80198BC8;
}

loc_80198B60:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80198B68:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80198B74;
    }
}

loc_80198B6C:
{
    r8 = r6;
    goto loc_80198BC4;
}

loc_80198B74:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80198B7C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80198BD0;
    }
}

loc_80198B80:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r7 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r6 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r5 + 16);
}

loc_80198B98:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80198BA8;
    }
}

loc_80198BA0:
{
    MemoryInline::FlatWrite32((r7 + 12), r6);
    goto loc_80198BAC;
}

loc_80198BA8:
{
    MemoryInline::FlatWrite32(r3, r6);
}

loc_80198BAC:
{
}

loc_80198BB0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80198BBC;
    }
}

loc_80198BB4:
{
    MemoryInline::FlatWrite32((r6 + 8), r7);
    goto loc_80198BD0;
}

loc_80198BBC:
{
    MemoryInline::FlatWrite32((r3 + 4), r7);
    goto loc_80198BD0;
}

loc_80198BC4:
{
    r6 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80198BC8:
{
}

loc_80198BCC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80198B60;
    }
}

loc_80198BD0:
{
}

loc_80198BD4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80198C28;
    }
}

loc_80198BD8:
{
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r8 + r5);
    r4 = (r4 + 16);
}

loc_80198BEC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80198C28;
    }
}

loc_80198BF0:
{
    r5 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
}

loc_80198BFC:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80198C0C;
    }
}

loc_80198C04:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    goto loc_80198C10;
}

loc_80198C0C:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_80198C10:
{
}

loc_80198C14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80198C20;
    }
}

loc_80198C18:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_80198C24;
}

loc_80198C20:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_80198C24:
{
    r8 = r5;
}

loc_80198C28:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_80198C38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80198C44;
    }
}

loc_80198C3C:
{
    r3 = 0;
    goto loc_80198CA0;
}

loc_80198C44:
{
    r4 = 18002;
    r0 = (r5 + 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = 0;
    r0 = (r6 - r0);
}

loc_80198C5C:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite32((r5 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80198C7C;
    }
}

loc_80198C70:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r5);
    goto loc_80198C84;
}

loc_80198C7C:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r5);
}

loc_80198C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80198C88:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198C98;
    }
}

loc_80198C90:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_80198C9C;
}

loc_80198C98:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_80198C9C:
{
    r3 = 1;
}

loc_80198CA0:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80198B40 func_80198B40 preserves=true fpr_mask=0x00000000
