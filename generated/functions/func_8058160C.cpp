#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058160C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_8058160C;

loc_8058160C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->lr = 0x80581628u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8056B218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r31 + 608));
    r3 = r31;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 352));
    r4 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 48));
    f5.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 112));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 108));
    f6.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f5.d);
    f7.d = PpcFmulsInline(f3.d, f0.d);
    f5.d = PpcFmulsInline(f5.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f7.d);
    // inline leaf 0x80581720 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 356), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 360), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 364), f0.d);
    // end of inlined leaf 0x80581720
    f1.d = MemoryInline::FlatReadFloat32((r31 + 376));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 384));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 368), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805816B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805816C0;
    }
}

loc_805816BC:
{
    goto loc_805816C4;
}

loc_805816C0:
{
    f2.d = f0.d;
}

loc_805816C4:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    MemoryInline::FlatWriteFloat32((r31 + 372), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805816D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805816E8;
    }
}

loc_805816DC:
{
    r3 = r31;
    r4 = (r31 + 356);
    ctx->lr = 0x805816E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591664u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
}

loc_805816E8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 364));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805816F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581704;
    }
}

loc_80581700:
{
    goto loc_80581708;
}

loc_80581704:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_80581708:
{
    MemoryInline::FlatWriteFloat32((r31 + 388), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058160C func_8058160C preserves=true fpr_mask=0x00000000
