#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056AD44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8056ADAC_loc_0 = 0;
    uint32_t addr_lfsx_8056ADB4_loc_0 = 0;
    uint32_t addr_lfsx_8056AE10_loc_0 = 0;
    uint32_t addr_lfsx_8056AE1C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8056AD44;

loc_8056AD44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x8056AD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 0x808B0000u;
    r3 = r30;
    r4 = (r4 + 20688);
    MemoryInline::FlatWrite32((r30 + 12), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8056AF10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    r5 = MemoryInline::FlatRead32((r31 + 20));
    r4 = 0x808B0000u;
    r3 = 0x808B0000u;
    r0 = 2;
    r7 = (r30 + 16);
    r4 = (r4 + 20656);
    r3 = (r3 + 20672);
    r8 = MemoryInline::FlatRead32(r5);
    r9 = 0;
    ctr = r0;
}

loc_8056ADA0:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r0 = (r9 & 255);
}

loc_8056ADA8:
{
    r6 = (r7 + r5);
    addr_lfsx_8056ADAC_loc_0 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056ADAC_loc_0);
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
    addr_lfsx_8056ADB4_loc_0 = (r3 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056ADB4_loc_0);
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056ADCC;
    }
}

loc_8056ADC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 392));
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
    goto loc_8056AE04;
}

loc_8056ADCC:
{
}

loc_8056ADD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8056ADE0;
    }
}

loc_8056ADD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 392));
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    goto loc_8056AE04;
}

loc_8056ADE0:
{
}

loc_8056ADE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8056ADF4;
    }
}

loc_8056ADE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 388));
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    goto loc_8056AE04;
}

loc_8056ADF4:
{
}

loc_8056ADF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8056AE04;
    }
}

loc_8056ADFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 388));
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
}

loc_8056AE04:
{
    r9 = (r9 + 1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & 1020);
    r6 = (r7 + r5);
    addr_lfsx_8056AE10_loc_0 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056AE10_loc_0);
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
    r0 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056AE1C:
{
    addr_lfsx_8056AE1C_loc_0 = (r3 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056AE1C_loc_0);
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AE34;
    }
}

loc_8056AE28:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 392));
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
    goto loc_8056AE6C;
}

loc_8056AE34:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8056AE38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AE48;
    }
}

loc_8056AE3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 392));
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    goto loc_8056AE6C;
}

loc_8056AE48:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8056AE4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AE5C;
    }
}

loc_8056AE50:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 388));
    MemoryInline::FlatWriteFloat32((r6 + 64), f0.d);
    goto loc_8056AE6C;
}

loc_8056AE5C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8056AE60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AE6C;
    }
}

loc_8056AE64:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 388));
    MemoryInline::FlatWriteFloat32((r6 + 48), f0.d);
}

loc_8056AE6C:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056ADA0;
    }
}

loc_8056AE74:
{
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FB gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056AD44 func_8056AD44 preserves=true fpr_mask=0x00000000
