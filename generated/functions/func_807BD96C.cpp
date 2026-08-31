#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD96C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

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

    goto loc_807BD96C;

loc_807BD96C:
{
    r5 = 0x809C0000u;
    r3 = 0x808A0000u;
    r5 = (r5 + 14552);
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r5 + 768));
    r6 = (r5 + 0);
    MemoryInline::FlatWriteRam32((r5 + 772), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 26324));
    ctr = r7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807BD994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BD9D8;
    }
}

loc_807BD998:
{
    r3 = MemoryInline::FlatRead32(r6);
    r3 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD9D0;
    }
}

loc_807BD9A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807BD9AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BD9BC;
    }
}

loc_807BD9B0:
{
    f1.d = f0.d;
    r3 = 1;
    goto loc_807BD9C0;
}

loc_807BD9BC:
{
    r3 = 0;
}

loc_807BD9C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BD9C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD9D0;
    }
}

loc_807BD9C8:
{
    r0 = r6;
    MemoryInline::FlatWriteRam32((r5 + 772), r6);
}

loc_807BD9D0:
{
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BD998;
    }
}

loc_807BD9D8:
{
    r3 = (0 - r0);
    r0 = (r3 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BD96C func_807BD96C preserves=true fpr_mask=0x00000000
