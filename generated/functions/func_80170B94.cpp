#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80170B94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80170B94;

loc_80170B94:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26712));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80170BA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80170BAC;
    }
}

loc_80170BA4:
{
    f1.d = f0.d;
    goto loc_80170BC0;
}

loc_80170BAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26704));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80170BB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80170BC0;
    }
}

loc_80170BBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26708));
}

loc_80170BC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26700));
    r0 = MemoryInline::FlatRead32(r3);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_0 = (r0_rot_0 & 130560);
    r0_mdest_0 = (r0 & -130561);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32(r3, r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80170B94 func_80170B94 preserves=true fpr_mask=0x00000000
