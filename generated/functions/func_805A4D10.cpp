#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A4D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_805A4D10;

loc_805A4D10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 8728);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 288));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4D34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A4D40;
    }
}

loc_805A4D38:
{
    f3.d = MemoryInline::FlatReadFloat32((r5 + 240));
    goto loc_805A4D44;
}

loc_805A4D40:
{
    f3.d = MemoryInline::FlatReadFloat32((r5 + 288));
}

loc_805A4D44:
{
    r4 = MemoryInline::FlatRead32((r3 + 392));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 288));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 284));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r31 = MemoryInline::FlatRead32((r3 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805A4D74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A4DA8;
    }
}

loc_805A4D78:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 268));
    r3 = (r1 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 272));
    r4 = (r1 + 8);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
}

loc_805A4DA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003E gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A4D10 func_805A4D10 preserves=true fpr_mask=0x00000000
