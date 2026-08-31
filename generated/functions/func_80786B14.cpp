#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80786B14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80786B14;

loc_80786B14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80786C60u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 1064), r0);
    goto loc_80786B54;
}

loc_80786B38:
{
    r0 = MemoryInline::FlatRead32((r31 + 1064));
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 1);
}

loc_80786B50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80786B74;
    }
}

loc_80786B54:
{
    r3 = MemoryInline::FlatRead32((r31 + 1064));
    r0 = MemoryInline::FlatRead32((r31 + 1080));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 1064), r3);
}

loc_80786B68:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80786B38;
    }
}

loc_80786B6C:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r31 + 1064), r0);
}

loc_80786B74:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 1068), r0);
    goto loc_80786B9C;
}

loc_80786B80:
{
    r0 = MemoryInline::FlatRead32((r31 + 1068));
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_80786B98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80786BBC;
    }
}

loc_80786B9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1068));
    r0 = MemoryInline::FlatRead32((r31 + 1080));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 1068), r3);
}

loc_80786BB0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80786B80;
    }
}

loc_80786BB4:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r31 + 1068), r0);
}

loc_80786BBC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 1072), r0);
    goto loc_80786BE4;
}

loc_80786BC8:
{
    r0 = MemoryInline::FlatRead32((r31 + 1072));
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 12);
}

loc_80786BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80786C04;
    }
}

loc_80786BE4:
{
    r3 = MemoryInline::FlatRead32((r31 + 1072));
    r0 = MemoryInline::FlatRead32((r31 + 1080));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 1072), r3);
}

loc_80786BF8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80786BC8;
    }
}

loc_80786BFC:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r31 + 1072), r0);
}

loc_80786C04:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 1076), r0);
    goto loc_80786C2C;
}

loc_80786C10:
{
    r0 = MemoryInline::FlatRead32((r31 + 1076));
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80786C28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80786C4C;
    }
}

loc_80786C2C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1076));
    r0 = MemoryInline::FlatRead32((r31 + 1080));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 1076), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80786C40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786C10;
    }
}

loc_80786C44:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r31 + 1076), r0);
}

loc_80786C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000FFB gpr_write=0x80000FDB gpr_return=0x00000018 fpr_read=0x000000F3 fpr_write=0x000000FD fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80786B14 func_80786B14 preserves=true fpr_mask=0x00000000
