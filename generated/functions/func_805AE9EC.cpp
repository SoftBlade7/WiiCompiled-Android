#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AE9EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805AE9EC;

loc_805AE9EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f7.d = MemoryInline::FlatReadFloat32(r5);
    r7 = 0x80890000u;
    f6.d = MemoryInline::FlatReadFloat32(r4);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f7.d, f6.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    f3.d = PpcFmulsInline(f9.d, f8.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 9528));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AEA38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AEAB0;
    }
}

loc_805AEA3C:
{
    f3.d = PpcFmulsInline(f7.d, f4.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805AEA44:
{
    f1.d = PpcFmulsInline(f5.d, f6.d);
    f2.d = PpcFmulsInline(f9.d, f6.d);
    f0.d = PpcFmulsInline(f7.d, f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = PpcFmulsInline(f5.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f6.d);
    f0.d = PpcFmulsInline(f9.d, f4.d);
    f3.d = PpcFmulsInline(f6.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f4.d = PpcFmulsInline(f2.d, f7.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f9.d);
    f0.d = PpcFmulsInline(f6.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f2.d = PpcFmulsInline(f7.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteFloat32(r3, f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AEAA8;
    }
}

loc_805AEAA4:
{
    ctx->lr = 0x805AEAA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_805AEAA8:
{
    r0 = 1;
    goto loc_805AEAC4;
}

loc_805AEAB0:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9532));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_805AEAC4:
{
    r3 = r0;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007E gpr_write=0x8000009B gpr_return=0x00000018 fpr_read=0x800003F8 fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AE9EC func_805AE9EC preserves=true fpr_mask=0x00000000
