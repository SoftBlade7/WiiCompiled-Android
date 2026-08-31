#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE190(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE190;

loc_801DE190:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE1B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE1C0;
    }
}

loc_801DE1B8:
{
    r0 = (r5 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE1BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE1C8;
    }
}

loc_801DE1C0:
{
    r3 = -7;
    goto loc_801DE234;
}

loc_801DE1C8:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE1CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE1D8;
    }
}

loc_801DE1D0:
{
    r3 = -4;
    goto loc_801DE234;
}

loc_801DE1D8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801DE1E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC2ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DE1E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DE1EC;
    }
}

loc_801DE1E8:
{
    goto loc_801DE234;
}

loc_801DE1EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801DE1F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE218;
    }
}

loc_801DE1F8:
{
    r4 = MemoryInline::FlatRead32((r30 + 136));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r30 + 140));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE220;
    }
}

loc_801DE218:
{
    r3 = -4;
    goto loc_801DE234;
}

loc_801DE220:
{
    r0 = MemoryInline::FlatRead32((r30 + 204));
    r3 = 0;
    r0 = (r0 & -16711681);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_1 & 16711680);
    r0_mdest_1 = (r0 & -16711681);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r30 + 204), r0);
}

loc_801DE234:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DE190 func_801DE190 preserves=true fpr_mask=0x00000000
