#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80243ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80243ADC;

loc_80243ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24232));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24228));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80243B1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80243B54;
    }
}

loc_80243B20:
{
    ctx->lr = 0x80243B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24224));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteFloat32(r31, f3.d);
    f4.d = f1.d;
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_80243B54:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    f1.d = f4.d;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x80000003 gpr_return=0x00000000 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80243ADC func_80243ADC preserves=true fpr_mask=0x00000000
