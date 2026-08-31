#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D968(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8071D9B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8071D968;

loc_8071D968:
{
}

loc_8071D96C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_8071D974;
    }
}

loc_8071D970:
{
    r6 = (r6 + 128);
}

loc_8071D974:
{
    r0 = (r6 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r7 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8332));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r7 = 0;
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8071D990:
{
    r4 = (r5 + r7);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8071D9A0;
    }
}

loc_8071D998:
{
    r4 = (r4 + 128);
    goto loc_8071D9AC;
}

loc_8071D9A0:
{
}

loc_8071D9A4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(128))) {
        goto loc_8071D9AC;
    }
}

loc_8071D9A8:
{
    r4 = (r4 + -128);
}

loc_8071D9AC:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r4 = (r4 * 12);
    r0 = (r6 + r0);
    addr_lfsx_8071D9B8_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071D9B8_loc_0);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8071D9C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071D9C8;
    }
}

loc_8071D9C4:
{
    f1.d = f0.d;
}

loc_8071D9C8:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071D990;
    }
}

loc_8071D9D0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071D968 func_8071D968 preserves=true fpr_mask=0x00000000
