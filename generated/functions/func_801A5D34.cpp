#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A5D34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A5D34;

loc_801A5D34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r0 = MemoryInline::FlatRead16((r13 + -28976));
}

loc_801A5D58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801A5D60;
    }
}

loc_801A5D5C:
{
    goto loc_801A5DA4;
}

loc_801A5D60:
{
    r4 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A5D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5D78;
    }
}

loc_801A5D70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5D8C;
    }
}

loc_801A5D74:
{
    goto loc_801A5D8C;
}

loc_801A5D78:
{
    r4 = -872415232;
    r0 = MemoryInline::FlatRead16((r4 + 8302));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
    goto loc_801A5D94;
}

loc_801A5D8C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
}

loc_801A5D94:
{
    r4 = 0x801A0000u;
    r0 = (r0 & 65535);
    r4 = (r4 + 24156);
    MemoryInline::FlatWrite32((r13 + -25384), r4);
}

loc_801A5DA4:
{
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801A5DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5E3C;
    }
}

loc_801A5DB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5DC4;
    }
}

loc_801A5DB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A5DB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5DD0;
    }
}

loc_801A5DBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5DE8;
    }
}

loc_801A5DC0:
{
    goto loc_801A5E3C;
}

loc_801A5DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801A5DC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5E3C;
    }
}

loc_801A5DCC:
{
    goto loc_801A5E00;
}

loc_801A5DD0:
{
    MemoryInline::FlatWrite32((r13 + -25372), r3);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801A5DE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A5A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_801A5E40;
}

loc_801A5DE8:
{
    MemoryInline::FlatWrite32((r13 + -25376), r3);
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x801A5DF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A5A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_801A5E40;
}

loc_801A5E00:
{
    MemoryInline::FlatWrite32((r13 + -25372), r3);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801A5E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A5A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A5E14:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5E40;
    }
}

loc_801A5E1C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25372));
    r4 = 1;
    r5 = (r0 + r3);
    r3 = r30;
    MemoryInline::FlatWrite32((r13 + -25376), r5);
    ctx->lr = 0x801A5E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A5A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + r3);
    goto loc_801A5E40;
}

loc_801A5E3C:
{
    r31 = 0;
}

loc_801A5E40:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A5D34 func_801A5D34 preserves=true fpr_mask=0x00000000
