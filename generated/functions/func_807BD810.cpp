#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BD810;

loc_807BD810:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807BD818:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BD828;
    }
}

loc_807BD81C:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r0 = 1;
    goto loc_807BD82C;
}

loc_807BD828:
{
    r0 = 0;
}

loc_807BD82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807BD834:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r0 | 1);
    r0 = (r0 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0_mrot_0 = (r0_rot_0 & -65536);
    r0_mdest_0 = (r0 & 65535);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BD810 func_807BD810 preserves=true fpr_mask=0x00000000
