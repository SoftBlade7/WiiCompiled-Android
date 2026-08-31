#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A5E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A5E5C;

loc_801A5E5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801A5E68:
{
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5EAC;
    }
}

loc_801A5E84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5F2C;
    }
}

loc_801A5E88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A5E8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5E94;
    }
}

loc_801A5E90:
{
    goto loc_801A5F2C;
}

loc_801A5E94:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead32((r13 + -25372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801A5EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5F2C;
    }
}

loc_801A5EA4:
{
    r30 = (r4 + 1);
    goto loc_801A5F2C;
}

loc_801A5EAC:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead32((r13 + -25376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801A5EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5F2C;
    }
}

loc_801A5EBC:
{
}

loc_801A5EC0:
{
    r30 = (r4 + 1);
    r0 = 0;
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(129))) {
        goto loc_801A5ED4;
    }
}

loc_801A5ECC:
{
}

loc_801A5ED0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(159))) {
        goto loc_801A5EE4;
    }
}

loc_801A5ED4:
{
}

loc_801A5ED8:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(224))) {
        goto loc_801A5EE8;
    }
}

loc_801A5EDC:
{
}

loc_801A5EE0:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(252))) {
        goto loc_801A5EE8;
    }
}

loc_801A5EE4:
{
    r0 = 1;
}

loc_801A5EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A5EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5F2C;
    }
}

loc_801A5EF0:
{
    r4 = MemoryInline::FlatRead8(r30);
    r0 = 0;
}

loc_801A5EFC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_801A5F14;
    }
}

loc_801A5F00:
{
}

loc_801A5F04:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_801A5F14;
    }
}

loc_801A5F08:
{
}

loc_801A5F0C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_801A5F14;
    }
}

loc_801A5F10:
{
    r0 = 1;
}

loc_801A5F14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A5F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5F2C;
    }
}

loc_801A5F1C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 16776960);
    r0_mdest_1 = (r0 & -16776961);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r30 = (r30 + 1);
    r7 = (r0 & 65535);
}

loc_801A5F2C:
{
    MemoryInline::FlatWrite32(r5, r6);
    r4 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A56DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32(r31, r3);
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00020FB gpr_write=0xC00000DB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A5E5C func_801A5E5C preserves=true fpr_mask=0x00000000
