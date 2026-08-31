#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C8860(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C8860;

loc_800C8860:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C8864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800C8868:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800C886C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800C8870:
{
    r0 = (r4 + -1);
    r7 = 0;
}

loc_800C887C:
{
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r7);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r3 + 16), r7);
    MemoryInline::FlatWrite32((r3 + 20), r7);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800C88D8;
    }
}

loc_800C889C:
{
}

loc_800C88A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_800C88B8;
    }
}

loc_800C88A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C88A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C88F4;
    }
}

loc_800C88AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_800C88B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C8904;
    }
}

loc_800C88B4:
{
    goto loc_800C8908;
}

loc_800C88B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(100));
}

loc_800C88BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800C88C0:
{
    r0 = 3;
    r4 = 2;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    goto loc_800C8908;
}

loc_800C88D8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(10000));
}

loc_800C88DC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800C88E0:
{
    r4 = -1;
    r0 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_1 = (r0_rot_1 & 1073709056);
    r0_mdest_1 = (r0 & -1073709057);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_800C8908;
}

loc_800C88F4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r7));
    goto loc_800C8908;
}

loc_800C8904:
{
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r7));
}

loc_800C8908:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r5 = (r5_rot_0 & -64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C8860 func_800C8860 preserves=true fpr_mask=0x00000000
