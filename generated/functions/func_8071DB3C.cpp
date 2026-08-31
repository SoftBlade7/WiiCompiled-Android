#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071DB3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8071DB90_loc_0 = 0;
    uint32_t addr_lfsx_8071DB94_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071DB3C;

loc_8071DB3C:
{
}

loc_8071DB40:
{
    r0 = r4;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8071DB50;
    }
}

loc_8071DB48:
{
    r0 = (r4 + 128);
    goto loc_8071DB5C;
}

loc_8071DB50:
{
}

loc_8071DB54:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(128))) {
        goto loc_8071DB5C;
    }
}

loc_8071DB58:
{
    r0 = (r4 + -128);
}

loc_8071DB5C:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r6 = (r4 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    r8 = MemoryInline::FlatRead32((r3 + 36));
    r5 = (r0 * 12);
    r4 = (r7 + r8);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071DB7C;
    }
}

loc_8071DB74:
{
    r6 = (r6 + 128);
    goto loc_8071DB88;
}

loc_8071DB7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(128));
}

loc_8071DB80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071DB88;
    }
}

loc_8071DB84:
{
    r6 = (r6 + -128);
}

loc_8071DB88:
{
    r3 = (r6 * 12);
    r0 = (r7 + r8);
    addr_lfsx_8071DB90_loc_0 = (r5 + r4);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DB90_loc_0);
    addr_lfsx_8071DB94_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DB94_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071DB3C func_8071DB3C preserves=true fpr_mask=0x00000000
