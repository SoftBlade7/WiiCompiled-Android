#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056E930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056E930;

loc_8056E930:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056E954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056E968;
    }
}

loc_8056E958:
{
    r3 = r5;
    r4 = 2048;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8056E96C;
}

loc_8056E968:
{
    r3 = 0;
}

loc_8056E96C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056E970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056E9EC;
    }
}

loc_8056E974:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8056E99C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056E9B0;
    }
}

loc_8056E9A0:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 3104);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8056E9EC;
}

loc_8056E9B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8056E9B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056E9C8;
    }
}

loc_8056E9B8:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8056E9EC;
}

loc_8056E9C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8056E9CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056E9E0;
    }
}

loc_8056E9D0:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 35072);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8056E9EC;
}

loc_8056E9E0:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8056E9EC:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056E930 func_8056E930 preserves=true fpr_mask=0x00000000
