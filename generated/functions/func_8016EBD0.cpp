#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016EBD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016EBD0;

loc_8016EBD0:
{
    r7 = MemoryInline::FlatRead32((r13 + -25712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8016EBD8:
{
    r0 = 0;
    r9 = MemoryInline::FlatRead16((r7 + 2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016EBEC;
    }
}

loc_8016EBE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8016EBE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016EBF0;
    }
}

loc_8016EBEC:
{
    r0 = 1;
}

loc_8016EBF0:
{
    r7 = (r3 + -3);
    r9_mrot_0 = (r0 & 1);
    r9_mdest_0 = (r9 & -2);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r0 = (r3 + -2);
    r3 = MemoryInline::FlatRead32((r13 + -25712));
    r8 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = 65;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r9_mrot_1 = (r9_rot_0 & 2048);
    r9_mdest_1 = (r9 & -2049);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r9_mrot_2 = (r9_rot_1 & 2);
    r9_mdest_2 = (r9 & -3);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r9_mrot_3 = (r9_rot_2 & 61440);
    r9_mdest_3 = (r9 & -61441);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r9_mrot_4 = (r9_rot_3 & 1792);
    r9_mdest_4 = (r9 & -1793);
    r9 = (r9_mdest_4 | r9_mrot_4);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r9_mrot_5 = (r9_rot_4 & 224);
    r9_mdest_5 = (r9 & -225);
    r9 = (r9_mdest_5 | r9_mrot_5);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r9_mrot_6 = (r9_rot_5 & -16777216);
    r9_mdest_6 = (r9 & 16777215);
    r9 = (r9_mdest_6 | r9_mrot_6);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r9));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000022F9 gpr_write=0x00000389 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016EBD0 func_8016EBD0 preserves=true fpr_mask=0x00000000
