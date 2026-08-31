#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80080D30;

loc_80080D30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80080D34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80080DB0;
    }
}

loc_80080D38:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r3 + 64));
    r5 = 1;
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r9 = (r9_rot_1 & 15);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29088));
    r7 = (r9 * 28);
    r0 = (r4 - r9);
    r7 = (r8 + r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r4));
}

loc_80080D64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80080DB0;
    }
}

loc_80080D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80080D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80080DA8;
    }
}

loc_80080D70:
{
    MemoryInline::FlatWrite32(r7, r6);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWriteFloat32((r7 + 12), f0.d);
    r0 = (r0 & 8388607);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r0_mrot_2 = (r0_rot_2 & 7340032);
    r0_mdest_2 = (r0 & -7340033);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWriteFloat32((r7 + 16), f0.d);
    r0 = (r0 | 524288);
    r0 = (r0 & -516097);
    MemoryInline::FlatWrite16((r7 + 20), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r7 + 4), r6);
    MemoryInline::FlatWrite32((r7 + 24), r0);
    MemoryInline::FlatWrite16((r7 + 22), static_cast<uint16_t>(r6));
}

loc_80080DA8:
{
    r7 = (r7 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80080D68;
    }
}

loc_80080DB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0_mrot_5 = (r0_rot_5 & -268435456);
    r0_mdest_5 = (r0 & 268435455);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FD gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80080D30 func_80080D30 preserves=true fpr_mask=0x00000000
