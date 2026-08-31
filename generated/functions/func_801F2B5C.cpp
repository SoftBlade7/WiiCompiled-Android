#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2B5C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F2B5C;

loc_801F2B5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2B68:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2B88;
    }
}

loc_801F2B80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F2B84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2B90;
    }
}

loc_801F2B88:
{
    r3 = 1;
    goto loc_801F2C68;
}

loc_801F2B90:
{
    r5 = (r1 + 16);
    r6 = (r1 + 10);
    r7 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F29D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2BA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2BAC;
    }
}

loc_801F2BA8:
{
    goto loc_801F2C68;
}

loc_801F2BAC:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F2BC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801F2BD4;
    }
}

loc_801F2BCC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_801F2BD4:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r5 = 0x80360000u;
    r5 = (r5 + -23936);
    r3 = r30;
    r6 = MemoryInline::FlatRead16((r7 + 14));
    r4 = (r1 + 12);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r7 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r5 = (r5 + r6);
    MemoryInline::FlatWrite32((r5 + 212), r0);
    MemoryInline::FlatWrite32((r5 + 216), r7);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F232Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2C18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2C20;
    }
}

loc_801F2C1C:
{
    goto loc_801F2C68;
}

loc_801F2C20:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F2C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2C3C;
    }
}

loc_801F2C2C:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_801F2C3C:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r5 = 0x80360000u;
    r5 = (r5 + -23936);
    r3 = 0;
    r4 = (r0 * 44);
    r0 = (r0 & 255);
    r0 = (r0 | 1024);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 1884));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_1 & -65536);
    r0_mdest_1 = (r0 & 65535);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F2C68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F2B5C func_801F2B5C preserves=true fpr_mask=0x00000000
