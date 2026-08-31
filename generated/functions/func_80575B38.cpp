#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80575B38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80575B38;

loc_80575B38:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r4 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead8((r3 + 58));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1121);
}

loc_80575B64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80575B8C;
    }
}

loc_80575B68:
{
}

loc_80575B6C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80575B78;
    }
}

loc_80575B74:
{
    r0 = 1;
}

loc_80575B78:
{
}

loc_80575B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80575B8C;
    }
}

loc_80575B80:
{
    r0 = 14;
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
}

loc_80575B8C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80575B9C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80575C0C;
    }
}

loc_80575BA0:
{
    r0 = MemoryInline::FlatRead16((r31 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80575BA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80575C0C;
    }
}

loc_80575BAC:
{
}

loc_80575BB0:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(10))) {
        goto loc_80575C0C;
    }
}

loc_80575BB4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1073741824);
}

loc_80575BC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80575BD0;
    }
}

loc_80575BC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 116));
}

loc_80575BCC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80575C0C;
    }
}

loc_80575BD0:
{
    r0 = (r3 & 1121);
}

loc_80575BD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80575C0C;
    }
}

loc_80575BD8:
{
}

loc_80575BDC:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(3))) {
        goto loc_80575BEC;
    }
}

loc_80575BE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_80575BEC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2147483648);
}

loc_80575BFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80575C28;
    }
}

loc_80575C00:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
    goto loc_80575C28;
}

loc_80575C0C:
{
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80575C28;
    }
}

loc_80575C20:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
}

loc_80575C28:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575C58;
    }
}

loc_80575C3C:
{
    r3 = r31;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575C4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575C58;
    }
}

loc_80575C50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
}

loc_80575C58:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80575B38 func_80575B38 preserves=true fpr_mask=0x00000000
