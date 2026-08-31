#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A4384(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A4384;

loc_807A4384:
{
    r3 = 0x809C0000u;
    r4 = 0x808A0000u;
    r3 = (r3 + 12104);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 21752));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1108));
    r5 = 0x809C0000u;
    r4 = 0x808A0000u;
    r3 = 0x809C0000u;
    f2.d = PpcFmulsInline(f1.d, f2.d);
    r5 = (r5 + 13872);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 21756));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWriteRamFloat32(r5, f1.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 2924));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807A43CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A43E4;
    }
}

loc_807A43D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A43D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A43F0;
    }
}

loc_807A43D8:
{
    r0 = 120;
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_807A43E4:
{
    r0 = 150;
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_807A43F0:
{
    r0 = 180;
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000021 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A4384 func_807A4384 preserves=true fpr_mask=0x00000000
